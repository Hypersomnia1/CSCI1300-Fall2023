/*
Introduction to loops
*/

#include <iostream>

using namespace std;

int main() {

    // 1. While Loops

    /*
    While loops consist of 3 parts - Variables, Loop Condition and Loop Body
    - a. Define (and initialize) the variables you'll use first
    - b. Write the loop condition (think until when you want your loop to run)
    - c. Write the loop body (set of statements you wish to execute when the condition is true)
        (Also remember to update the loop invariant)
    */

    /*
        Example 1 - Print first 10 numbers to the terminal
        Approach this problem by thinking of the 3 parts discussed above
    */ 

    // a. Define (and initialize) the variables you need
    int number = 1; // Need to print 1....10. So let's start the number at 1.

    // b. Write the loop condition
    // We need to print till 10, so let the loop run until the number reaches 10
    while (number <= 10); {
        // c. We need to print, so let's write a cout statement
        cout << number << endl;

        // Remember to update the number
        // number = number + 1;
        number ++; // this is a counter variable
    }

    return 0;
}