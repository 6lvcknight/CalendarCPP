//
//  main.cpp
//
//
//  Created by Foluwa Aderibigbe on 2022-10-08.
//
#include <cctype>
#include <iostream>
#include <string>
#include "Calender code.h"
#include "Add Event.h"
#include "excessivecodes.h"

using namespace std;

int main() {
    int choice;
    Add_event event;

    do {
        // Display menu
        cout << "Calendar Menu" << endl;
        cout << "1. View calendar" << endl;
        cout << "2. Add event" << endl;
        cout << "3. Edit event" << endl;
        cout << "4. Delete event" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Calender_code();
                cout << endl;
                break;
            case 2:
                event.input();
                event.addVector();
                cout << endl;
                break;
            case 3:
                event.editElements();
                cout << endl;
                break;
            case 4:
                event.deleteElement();
                cout << endl;
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
