// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 15: do-while loop

#include<iostream>

using namespace std;

// program to compute sum of numbers(given by user)
// type 0 to stop entering input

int main()
{
    int num = 0;
    int sum = 0;

    // cout << "Enter number: ";
    // cin >> num;

    // condition is dependant on user input
    while(num != 0)
    {     
        cout << "Enter number: ";
        cin >> num;
        sum+=num; // sum = sum + num;
    }
    
    // do while loop -> loop executes at least once
    // menu
    do
    {
        cout << "Enter number: ";
        cin >> num;
        sum+=num; // sum = sum + num;
    } while (num != 0);
    
    cout << "Sum: " << sum << endl;
    return 0;
}