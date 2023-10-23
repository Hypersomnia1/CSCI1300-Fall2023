// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 13: while loops

#include<iostream>

using namespace std;

// program to print the first 50 numbers

// function to print the odd numbers from 1 - 10
void printOdds()
{
    int i = 1;
    while(i < 10)
    {
        cout << "iteration: " << i << endl;
        if(i % 2 != 0)
        {
            cout << i << endl;
        }
        i++;
    }
}


void printOdds1()
{
    int i = 1;
    while(i < 10) // counting to 10
    {
        cout << "iteration: " << i << endl;
        cout << i << endl;
        i+=2; // increment by 1
        // update
    }
}
// more efficient approach


int main()
{
    // 1. define and initializ the loop variable -> i, j
    // 2. condition - executes (and terminates loop)
    // 3. updating the loop variable to avoid infinite loop

    // int i = 0; // loop variable
    // while(i < 50)
    // {
    //     i++; // i = i + 1; i += 1; 
    //     cout << "i: " << i << endl;
    // }
    printOdds(); // function call
    printOdds1();

    return 0;
}