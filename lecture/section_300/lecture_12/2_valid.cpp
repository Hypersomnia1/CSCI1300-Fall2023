// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 12: while loop

#include<iostream>

using namespace std;

int main()
{
    int number = 0;
    cout << "Enter number: ";
    cin >> number;
    // loop -> repeatedly execute statement(s)
    // while loop -> versatile loop -> any problem

    // while(condition) // the code block executes as long as the condition is true
    // {
    //     // code here
    //     // many times depending on the condition
    // }

    while(number <= 0) // -2 
    {
        // add condition to also check for non numeric values
        cout << "Please enter valid input." << endl; // 
        // prompt for input again
        cout << "Enter number: ";
        cin >> number;
        // common cause for infinite loop -> forgetting to update the variable that is evaluated in the condition
    }

    if(number > 0)
    {
        // computes something
        cout << "valid input" << endl;
    }

}