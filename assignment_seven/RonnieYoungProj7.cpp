// Author: Ronnie Young
// Date: October 31 2020
// Class: CSCI 121
// Project: Project 07
// The purpose of this project is to help the students to reinforce the knowledge from Chapter 7 of
// the textbook.

// 1. Review top-down design
// 2. Understand and apply the syntax of array
// 3. Understand and apply the linear search, select-sort, insert-sort, and bubble-sort algorithms

#include <iostream>
using namespace std;

void menu();
//post-condition: The menu is printed to the terminal, the user will have the options to pick functions to run, and values will be returned to the user.

void fill_array(int arr[], int size);
// pre-condition: The arr has actual size that is greater than or equal to size
// post-condition: arr[0], ..., arr[size-1] is filled from keyboard
void print_array(int arr[], int size);
// pre-condition: The arr has actual size that is greater than or equal to size
// post-condition: arr[0], ..., arr[size-1] is printed to screen with 5 elements per line
int linear_search(int arr[], int size, int key);
// pre-condition: arr has given size
// post-condition: The index of first occurrence of key in arr is returned. If the key cannot be found in arr, -1 is returned
void select_sort(int arr[], int size);
// pre-condition: arr has given size Of course, a menu function is needed. The main function will look like following:
// post-condition: the elements in arr are rearranged from least to largest
void insert_sort(int arr[], int size);
// pre-condition: arr has given size
// post-condition: the elements in arr are rearranged from least to largest
void bubble_sort(int arr[], int size);
// pre-condition: arr has given size
// post-condition: the elements in arr are rearranged from least to largest

void swapValues(int &v1, int &v2);

int indexOfSmallest(const int a[], int startIndex, int numberUsed);

int main(){
    int choice;
    int a[9];
    do{
        menu();
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                fill_array(a, 9);
                cout << "Enter the key you want to search: ";
                int key;
                cin >> key;
                int index = linear_search(a, 9, key);
                if(index == -1)
                    cout << "The key " << key << " is not in array\n";
                else
                    cout << "The key " << key << " is #" << (index + 1) << " element in array\n";
                print_array(a,9);
                break;
            }
            case 2:
            {
                fill_array(a, 9);
                select_sort(a, 9);
                cout << "After sort, the array is:\n";
                print_array(a, 9);
                break;
            }
            case 3:
            {
                fill_array(a, 9);
                insert_sort(a, 9);
                cout << "After sort, the array is:\n";
                print_array(a, 9);
                break;
            }
            case 4:
            {
                fill_array(a, 9);
                bubble_sort(a, 9);
                cout << "After sort, the array is:\n";
                print_array(a, 9);
                break;
            }
            case 5:
            {
                cout << "Thank you for using the array functions\n";
                break;
            }
            default:
            {
                cout << "Wrong choice. Please choose from menu: ";
                break;
            }
        }
    }while(choice != 5);

    return 0;
}

void menu()
{
    // Display a menu to the user allowing options for various functions.
	cout << "\n\t***************************************************";
	cout << "\n\t*                   Menu                          *";
	cout << "\n\t* 1. Preform linear search                        *";
	cout << "\n\t* 2. Preform selection sort                       *";
	cout << "\n\t* 3. Preform insertion sort                       *";
    cout << "\n\t* 4. Preform bubble sort                          *";
	cout << "\n\t* 5. Quit                                         *";
	cout << "\n\t***************************************************";

    return;
}

void fill_array(int arr[], int size)
{
    // Get users input for the array
    cout << "Please input 9 separate integers." << endl;
    // A for loop to loop over the array and set the values for said array.
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }
}

void print_array(int arr[], int size)
{
    //A for loop to loop over the array and print the values separated by spaces.
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int linear_search(int arr[], int size, int key)
{
    // linear search
}

void select_sort(int arr[], int size)
{
    // selection sort
    int indexOfNextSmallest;
    for(int index = 0; index < size - 1; index++)
    {
        indexOfNextSmallest = indexOfSmallest(arr, index, size);
        swapValues(arr[index], arr[indexOfNextSmallest]);
    }
}

void swapValues(int& v1, int& v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}

void insert_sort(int arr[], int size)
{
    //insert sort
}

void bubble_sort(int arr[], int size)
{
    //bubble sort
}

int indexOfSmallest(const int a[], int startIndex, int numberUsed)
{
    int min = a[startIndex], indexOfMin = startIndex;
    for (int index = startIndex + 1; index < numberUsed; index++)
        if (a[index] < min)
        {
            min = a[index];
            indexOfMin = index;
        }
    return indexOfMin;
}