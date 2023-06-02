//
//  Add Event.h
//  calender cpp
//
//  Created by Foluwa Aderibigbe on 2023-05-01.
//

#ifndef Add_Event_h
#define Add_Event_h

#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "excessivecodes.h"


class Add_event {
private:
    string event;
    vector<int> vectorArray;
    vector<pair<string, vector<int>>> vectorOfArrays;

public:
    void input() {
        convertinput date;

        cout << "Select a date: ";
        date.askfordate();
        cout << "Name of the Event? ";
        cin >> event;

        vectorArray.clear(); // Clear the vectorArray before adding new values
        vectorArray.push_back(date.day);
        vectorArray.push_back(date.month);
        vectorArray.push_back(date.year);
    }

    void addVector(){
        vectorOfArrays.push_back(make_pair(event, vectorArray));
    }

    void deleteElement(){
        if (vectorOfArrays.empty()){
            cout << "You have no current events." << endl;
        }
        else {
            convertinput date;
            string eventd;
            
            cout << "Select a date: ";
            date.askfordate();
            cout << "Select the event: ";
            cin >> eventd;
            
            //loop through the vector and dellect the corresponding elements to what the user selected
            for (auto i = vectorOfArrays.begin(); i != vectorOfArrays.end(); ) {
                if (i->first == eventd || (i->second[0] == date.day && i->second[1] == date.month && i->second[2] == date.year)) {
                    i = vectorOfArrays.erase(i);
                } else {
                    i++;
                }
            }
        }
    }
    void editElements(){
        if (vectorOfArrays.empty()){
            cout << "You have no current events." << endl;
        }
        else {
            convertinput date;
            string eventd;
            
            cout << "Select a date: ";
            date.askfordate();
            cout << "Select the event: ";
            cin >> eventd;
            
            //loop through the vector and dellect the corresponding elements to what the user selected
            for (auto i = vectorOfArrays.begin(); i != vectorOfArrays.end(); ) {
                if (i->first == eventd || (i->second[0] == date.day && i->second[1] == date.month && i->second[2] == date.year)) {
                    convertinput newdate;
                    cout << "Select a new date: ";
                    newdate.askfordate();
                    i->second[0] = newdate.day;
                    i->second[1] = newdate.month;
                    i->second[2] = newdate.year;
                } else {
                    i++;
                }
            }
        }
    }
};


#endif /* Add_Event_h */
