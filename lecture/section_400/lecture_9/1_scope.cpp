// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 9: scope

#include<iostream>
using namespace std;

int main()
{
    int number = 10;
    int x = 10;
    cout << "x value outside if: " << x << endl;
    if(number >= 0)
    {
        int x = 20; // declaring variable of the same name inside if block; can cause issues
        // use a different name for variables inside if block
        cout << number;
        cout << "x value inside if: " << x << endl;
        char choice;
    }
    choice = 's';
    // choice is defined inside the if block and cannot accessed outside the if block
    return 0;
}