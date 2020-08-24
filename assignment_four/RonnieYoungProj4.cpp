// Comments
// Author: Ronnie Young
// Date: September 21 2020
// Class: CSCI 121
// Project: Project 04
/* This is a C++ program that takes a depth in kilometers inside the earth as input data; calculate and display
the temperature at this depth in both degrees Celsius and degree Fahrenheit.
 CSCI 121 Computer Science I */

#include <iostream>
using namespace std;

// prints out information to tell the user what this program does.
void print_introduction();

// computes and returns the celsius temperature at a depth measured in kilometers.
double celsius_at_depth(double depth);

// converts a Celsius temperature celsius to Fahrenheit.
double celsius_to_fahrenheit(double celsius);

// display the conclusion that what is the temperature in both Celsius and Fahrenheit at depth of the earth.
void print_conclusion(double depth);

// Ask the user if they want to rerun the program. If they do call main again.
void rerun();

int main()
{
    cout << "Test";

    rerun();

    return 0;
}

void rerun()
{
    using namespace std;
    char rerun;

    do
    {
        cout << "Would you like to do it again? (Y/N): \n";
        cin >> rerun;

    }while(!(rerun == 'y' || rerun == 'Y' ||  rerun == 'n' || rerun == 'N'));

    if (rerun == 'y' || rerun == 'Y')
        main();
}