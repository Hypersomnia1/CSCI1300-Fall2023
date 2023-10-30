// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 10: input validation with cin

#include<iostream>
using namespace std;

int main()
{
    int number = 0;
    cout << "Enter number: ";
    cin >> number; // can only store integer data
    // cin will be set to an error or failed state if user enter non-numeric data into a integer variable
    
    // cin.fail() -> returns true if cin is in a failed state
    if(cin.fail() == true)
    {
        cout << "cin failed state" << endl;
        return 1;
    }

    cin.clear(); // clears the failed state of cin
    // // make sure that the cursor moves on ahead
    cin.ignore(10000, '\n');
    // some arbitrary number - 100000
    // move on 10000 spaces ahead and use the new line as the breakpoint

    cout << number << endl;

    string name;
    cout << "Enter name: ";
    cin >> name;

    return 0;
}