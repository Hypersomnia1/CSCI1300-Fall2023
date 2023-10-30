// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 14: for loop

#include<iostream>

using namespace std;

/**
 * for loop -> count controlled loop
 * for(;;)
 * for(loop variable initialization; condition; update)
 * {
 *      statement
 * }
 * 
 * 
 * loop initialization
 * while(condition)
 * {
 *      statement
 *      update loop variable
 * }
 */


// while loop -> versatile loop -> can be used for any problem
// do not use break or return  in this loop -> use your condition instead
// event contrlled loop -> update is not just +1 or -1 

// program to print numbers 1 - 10

int main()
{
    // int i = 0;
    // while(i < 10)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    // count controlled loops -> only do this
    // while(budget < 1.99)
    // for(;budget < 1.99;)
    for(int i = 0; i < 10; i++) // when you know how many iterations it will take
    // update first and then check condition
    {
        cout << i << endl;
        // udpate happens here
    }

    return 0;
}