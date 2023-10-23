// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 14: loop control statements

#include<iostream>

using namespace std;

// loop control -> break and continue

int main()
{

    for(int i = 0; i < 7; i++) // 7 -> 0 - 6
    {
        // is i defined here?
        if(i == 3)
        {
            break; // terminate the loop
        }
        cout << i << endl;
    }

    for(int i = 0; i < 7; i++) // 7
    {
        if(i == 3)
        {
            continue; // terimate the current iteration of the loop
            // going to skip the remianing code in the loop -> go back to the loop statement
        }
        cout << i << endl;
    }

    return 0;
}