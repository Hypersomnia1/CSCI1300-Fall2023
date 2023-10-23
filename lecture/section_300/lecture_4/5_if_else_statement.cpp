// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 4: if else statement

#include<iostream>

using namespace std;

// write a program to check if it is end of class

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
    else // cannot have an else without an if
    {
        cout << "You still have some more time remaining. Stay seated!" << endl;
    }

    // if statement/block
    // if (condition) // condition or evaluating an expression
    // {
    //     do something
    // }
    // else
    // {
    //     do something else
    // }

    return 0;
}
