// Comments
// Author: Ronnie Young
// Date: September 8 2020
// Class: CSCI 121
// Project: Project 03
/* This is a C++ program that plays a game of 23.
 CSCI 121 Computer Science I */

#include <iostream>
using namespace std;

int main()
{
    int toothpicks;
    int human_pick;
    int computer_pick;
    bool human_won = true;
    char play_again = 'Y';
    // A while loop wrapped around the entire function.
    // This is so the user can rerun the program multiple times.
    while(play_again == 'Y' || play_again == 'y')
    {
        toothpicks = 23;
        cout << "Let's play a game of \"23\"!\n";
        // The while loop to run it as long as the sticks are greater than 23.
        while(toothpicks > 0){
            // Ask for input.
            cout << "Enter the number of sticks you wish to pick: ";
            cin >> human_pick;
            //Detect if the user has input a valid answer.
            while(human_pick > 3 || human_pick < 1)
            {
                cout << "Wrong number of sticks. Please pick 1, 2, or 3 sticks:";
                cin >> human_pick;
            }
            //Calculate the number of sticks after player input.
            toothpicks -= human_pick;
            if(toothpicks <= 0)
            {
                cout << "You picked the last stick.\n";
                cout << "Sorry the computer beat you!\n";
                human_won = false;
                break;
            }
            else
            {
                cout << "You picked " << human_pick << " sticks. " << toothpicks << " left.\n";
            }

            //Computers logic.
            if(toothpicks > 4)
            {
                computer_pick = 4 - human_pick;
            }
            else if( toothpicks > 1 && toothpicks < 5)
            {
                if(toothpicks == 4)
                {
                    computer_pick = 3;
                }
                else if(toothpicks == 3)
                {
                    computer_pick = 2;
                }
                else if(toothpicks == 2)
                {
                    computer_pick = 1;
                }
            }
            else
            {
                computer_pick = 1;
            }
            // computer_pick = (rand() % 3) + 1;
            toothpicks -= computer_pick;
            if(toothpicks <= 0 && human_won == true)
            {
                cout << "The computer picked the last stick.\n";
                cout << "You won!\n";
                break;
            }
            else
            {
                cout << "Computer picked " << computer_pick << " sticks. " << toothpicks << " left.\n";

            }

        }
        cout << "Do you want to play again?(Y/N): \n";
        cin >> play_again;
    }
    return 0;
}