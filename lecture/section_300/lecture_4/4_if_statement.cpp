// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 4: if statement

#include<iostream>

using namespace std;

// write a program to check if it is the end of class

int main()
{
    double time = 0;

    cout << "What is the time right now: ";
    cin >> time;
    // time == 2.15
    if ( time >= 2.15 ) 
    {
        cout << "Yay! end of class" << endl;
    }

    // if statement/block
    // if (condition) // condition or evaluating an expression
    // {
    //     do something
    // }

    return 0;
}
