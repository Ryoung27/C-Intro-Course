// Comments
// Author: Ronnie Young
// Date: October 02 2020
// Class: CSCI 121
// Project: Project 05
/* This project will help the students to reinforce the knowledge from Chapter 5 of the textbook.

1. Understand and apply top-down design concept

2. Implement the functions according to specified requirements

3. Test and debug the functions
 CSCI 121 Computer Science I */

#include <iostream>

void testMenu();
// Prints out the menu opitions for the test menu.

bool isLeapYear(int year);
// Returns a boolean value of true if the year is a leap year.
// If the year is not a leap year it returns false.


int main()
{
    using namespace std;
    int choice;
    int day, month, year;
    // Create a do while loop that runs while choice != 7;
    do
    {
        // Call the testMenu function, which creates a menu for users to select from.
        testMenu();
        cout << "Please choose from the menu: ";
        cin >> choice;
        switch(choice)
        {
            case 1: // check if a given year is leap year
                cout << "Please enter a year: ";
                cin >> year;
                if (isLeapYear(year))
                    cout << "Year " << year << " is a leap year" << endl;
                else
                    cout << "Year " << year << " is NOT a leap year" << endl;
                break;
            case 2: // calculate the century value of a given year
                cout << "Write case 2." << endl;
                break;
            case 3: // calculate the year value of a given year
                cout << "Write case 3." << endl;
                break;
            case 4: // calculate the month value of a given month in a given year
                cout << "Write case 4." << endl;
                break;
            case 5: // calculate the day of week of a given date
                cout << "Write case 5." << endl;
                break;
            case 6: // print out the name of a given day of week
                cout << "Write case 6." << endl;
                break;
            case 7:
                cout << "Did you test all the functions yet? If not please go back and rerun the program." << endl;
                break;
            default:
                cout << "Wrong option. Please choose from menu:\n";
                break;
        }


    } while(choice != 7);

}

//Definition uses iostream:

void testMenu()
{
    using namespace std;
    // pre-condition:
    cout << "Please select from the below listed options (1-7):" << endl;
    cout << "1: Check if the given year is a leap year." << endl;
    cout << "2: Calculate the century value of a year." << endl;
    cout << "3: Calculate the year value of a year." << endl;
    cout << "4: Calculate the month value of a given month in a given year." << endl;
    cout << "5: Calculate the day of week of a given date." << endl;
    cout << "6: Print the name of a given day of week." << endl;
    cout << "7: Exit Program." << endl;
    return;
    //// post-condition: the test menu is displayed for choose
}

bool isLeapYear(int year)
{
    return year % 400 == 0 || (year % 400 == 0 && year % 100 != 0);
}