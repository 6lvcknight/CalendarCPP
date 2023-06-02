//
//  excessivecodes.h
//  calender cpp
//
//  Created by Foluwa Aderibigbe on 2023-05-13.
//

#ifndef excessivecodes_h
#define excessivecodes_h

#include <cctype>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class month_input{
public:
    int day;
    int month;
    string monthh;
    string gettheline;
    string array[2];
    vector<pair<int, string>> quickstorage;
    
    void askforddate() {
        cin >> gettheline;
        int a = 0; // Initialize a variable to track the index of the array
        string temp = "";
        for (int i = 0; i < gettheline.length(); i++) {
            if (gettheline[i] == '/' or gettheline[i] == ' ') {
                array[a] = temp;
                temp = "";
                a++; // Increment the index after storing a date component
            } else {
                temp = temp + gettheline[i];
            }
        }
        array[a] = temp; // Store the last date component
        //quickstorage[0] = array[0];
    }
    void monthinput(int a, string month){
        cout << "Enter the month of choice: ";
        cin >> month;
        // Try to convert the input to an integer
        istringstream iss(month);
        iss >> a;
    }
};


class convertinput{
public:
    int day;
    int month;
    int year;
    string gettheline;
    string array[3];
    
    void askfordate() {
        cin >> gettheline;
        int a = 0; // Initialize a variable to track the index of the array
        string temp = "";
        for (int i = 0; i < gettheline.length(); i++) {
            if (gettheline[i] == '/' or gettheline[i] == ' ') {
                array[a] = temp;
                temp = "";
                a++; // Increment the index after storing a date component
            } else {
                temp = temp + gettheline[i];
            }
        }
        array[a] = temp; // Store the last date component
        day = stoi(array[0]);
        month = stoi(array[1]);
        year = stoi(array[2]);
    }
};

/*#######################################################################################################*/
//excess codes from the calendar code


string countDigits(string num, int day){
    //determines the spacing needed for each day in the week
    string a;
    if (day>0){
        a= a + "   ";
    }
    else{
        if ((num).length()==1){
            a = a + " " + num + " ";
        }
        else{
            a = a + num + " ";
        }
    }
    
    return a;
}

void printMonth(int day, int month){
    //prints the days in the 7 day calendar week starting from sunday
    cout << " S  M Tu  W Th  F  S" << endl;
    int y = 1 - day;
    string week;
    while (y<month){
        for (int j=0; j<7 && y!=(month+1); j++){
            week = week + countDigits(to_string(y), day);
            day--;
            y++;
        }
        week = week + "\n";
        
    }
    cout << week << endl;

}

bool IsLeapYear(int year){
    bool c;
    if (year%4==0 or (year%100==0 && year%400==0)){
        c = true;
    }
    else{
        c = false;
    }
    return c;
}

int DaysInMonth(int month, int year){
    int a=0;
    
    if (month==1){
        a=31;
    }
    else if (month==2){
        if((IsLeapYear(year)==false)){
            a=28;
        }
        else{
            a=29;
        }
    }
    else if (month==3){
        a=31;
    }
    else if (month==4){
        a=30;
    }
    else if (month==5){
        a=31;
    }
    else if (month==6){
        a=30;
    }
    else if (month==7){
        a=31;
    }
    else if (month==8){
        a=31;
    }
    else if (month==9){
        a=30;
    }
    else if (month==10){
        a=31;
    }
    else if (month==11){
        a=30;
    }
    else if (month==12){
        a=31;
    }
    return a;
}

int FirstDayOfMonth(int month, int year){
    int b;
    b= (1+5*((year-1)%4)+4*((year-1)%100)+6*((year-1)%400))%7;
    if ((IsLeapYear(year)==false)){
        switch(month){
            case 1:
                b=b+0;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 2:
                b=b+3;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 3:
                b=b+3;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 4:
                b=b+6;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 5:
                b=b+1;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 6:
                b=b+4;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 7:
                b=b+6;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 8:
                b=b+2;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 9:
                b=b+5;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 10:
                b=b+0;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 11:
                b=b+3;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 12:
                b=b+5;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
        }
    }
    else{
        switch(month){
            case 1:
                b=b+0;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 2:
                b=b+3;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 3:
                b=b+4;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 4:
                b=b+0;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 5:
                b=b+2;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 6:
                b=b+5;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 7:
                b=b+0;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 8:
                b=b+3;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 9:
                b=b+6;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 10:
                b=b+1;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 11:
                b=b+4;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
            case 12:
                b=b+6;
                if(b>6){
                    b=7-b;
                }
                else{
                    b=b;
                }
                break;
        }
    }
    return abs(b);
}




#endif /* excessivecodes_h */
