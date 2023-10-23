/*
Arrays - Algorithm 1
This program is used to illustrate how you fill an array
Let's assume you wish to fill an integer array (ofcourse it extends to any data type)

Things to ask yourself
- What data type is the array going to be
- How many elements do I need to fill it with
- What do I need to fill it with
  (If there are any other questions/clarifications, reach out to any course staff)

How to approach this problem
- You should know how to declare that array (whatever you need to fill)
- You should know how you can fill an element into an array at a given position
*/

#include <iostream>

using namespace std;

int main() {

    // 1. Let's declare that array as an integer array of 5 elements

    int array[5]; // Note that it's only declared, but not set to any values

    // 2. So before using the array, let's fill it up
    // Also, because for uninitialized variables, we cannot predict it's values

    // First method - using access to individual elements
    array[0] = 1;
    array[1] = 4;
    array[2] = 6;
    // and so on
    // also note that you can only go up till array[4], because the indexing is from 0 to (size-1).

    // Second method - using loops (for-loop)
    for (int i=0; i<5; i++) {
        array[i] = 20;
    }

    // 3. Display the elements of the array yourself
    // cout << array -> This will not work, correct?

    // So use a similar looking loop and see the values below

    return 0;
}