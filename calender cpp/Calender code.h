//
//  Calender code.h
//  calender cpp
//
//  Created by Foluwa Aderibigbe on 2023-03-15.
//

#ifndef Calender_code_h
#define Calender_code_h

#include <cctype>
#include <iostream>
#include <string>
#include <sstream>

#include "excessivecodes.h"
using namespace std;

int DaysInMonth(int month, int year);
int FirstDayOfMonth(int month, int year);
void printMonth(int dayoftheweek, int month);
string countDigits(string num, int day);
bool IsLeapYear(int year);
void displaymonth(int *a, string *b, string month);
void viewmonthcode(int year);
void viewdaycode(string month, int year);

void Calender_code(){
    int question;
    
    int year;
    cout << "Pick a Year: ";
    cin >> year;
    
    cout << endl;
    cout << "########" << year << "########" << endl;
    
    for (int i = 1; i<13; i++){
        string b;
        string month;
        
        displaymonth(&i, &b, month);
        transform(b.begin(), b.end(), b.begin(), ::toupper);
        cout << "\n" << b << " " << year << endl;
        printMonth(FirstDayOfMonth(i,year), DaysInMonth(i, year));
    }
    
    cout << "####################" << endl;
    cout << endl;
    
    do{
        cout << "View calendar" << endl;
        cout << "1. View month" << endl;
        cout << "2. View day" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> question;
        switch(question){
            case 1:
                viewmonthcode(year);
                break;
            case 2:
                
                break;
            case 3:
                cout << "Exiting 'View calendar'..." << endl;
                cout << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
                break;
        }
    }while (question != 3);
}

void viewdaycode(string month, int year){
    cout << "#############################################" << endl;
}

void viewmonthcode(int year){
    int a;
    string b;
    string month;
    month_input input;
    
    input.monthinput(a, month);
    
    displaymonth(&a, &b, month);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    cout << "\n" << b << " " << year << endl;
    printMonth(FirstDayOfMonth(a,year), DaysInMonth(a, year));

    int question;
    do{
        cout << "View month schedule" << endl;
        cout << "1. View Day schedule" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> question;
        switch(question){
            case 1:
                viewdaycode(b, year);
                break;
            case 2:
                cout << "Exiting 'View calendar'..." << endl;
                cout << endl;
                break;
            default:
                cout << "Invalid choice. Please enter either number 1 or 2." << endl;
                break;
        }
    }while (question != 2);
    
}

void displaymonth(int *a, string *b, string month){
    
    while (true){
        for (int j =0; month[j]; j++){
            month[j]= tolower(month[j]);
        }
        
        if (month =="january" or *a==1){
            *a=1;
            month = "january";
            *b = month;
            break;
        }
        else if (month=="february" or *a==2){
            *a=2;
            month = "february";
            *b = month;
            break;
        }
        else if (month=="march" or *a==3){
            *a=3;
            month = "march";
            *b = month;
            break;
        }
        else if (month=="april" or *a==4){
            *a=4;
            month = "april";
            *b = month;
            break;
        }
        else if (month=="may" or *a==5){
            *a=5;
            month = "may";
            *b = month;
            break;
        }
        else if (month=="june" or *a==6){
            *a=6;
            month = "june";
            *b = month;
            break;
        }
        else if (month=="july" or *a==7){
            *a=7;
            month = "july";
            *b = month;
            break;
        }
        else if (month=="august" or *a==8){
            *a=8;
            month = "august";
            *b = month;
            break;
        }
        else if (month=="september" or *a==9){
            *a=9;
            month = "september";
            *b = month;
            break;
        }
        else if (month=="october" or *a==10){
            *a=10;
            month = "october";
            *b = month;
            break;
        }
        else if (month=="november" or *a==11){
            *a=11;
            month = "november";
            *b = month;
            break;
        }
        else if (month=="december" or *a==12){
            *a=12;
            month = "december";
            *b = month;
            break;
        }
        else{
            cout << "Try again! Check for spelling errors" <<endl;
            break;
        }
    }
}



#endif /* Calender_code_h */
