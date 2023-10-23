// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 3: console input - cin

#include<iostream>

using namespace std;

int main()
{
    int num_1 = 0;
    int num_2 = 0;
   
    // can define and initialize multiple variables in a single c++ statement
    // int num_1 = 0, num_2 = 0; // same as lines 11 and 12

    // always add a descriptive cout statement letting the user know what your program is asking for before accepting user input through cin
    cout << "Enter 2 numbers: ";
    // cin >> num_1;
    // cin >> num_2;

    // can accept multiple input values through a a single cin call
    cin >> num_1 >> num_2; // same as lines 19 and 20
    // console input
    // >> -> deletion
    
    cout << "Num 1 = " << num_1 << "Num 2 = " << num_2 << endl;

    return 0;
}