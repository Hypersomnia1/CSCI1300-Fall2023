// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 12: pre/post increment and decrement

#include<iostream>

using namespace std;

// adding/subtracting a value of 1 is very commonly used in loops

int main()
{
    // section 2.2.2
    // pre/post increment

    int num_1 = 10;
    // num_1 = num_1 + 1;
    // num_1 += 1; // same as line 13
    // num_1 *= 2

    // num_1++ // same as line 13;
    // calculating and returning a value

    // return values
    // num_1 = 10
    // int x = num_1 * 2;  // 20

    // post increment -> happens after the otehr computation
    int result = (num_1++) * 2; // 22
    // 1. num_1 * 2 -> 20
    // 2. num_1 = num_1 + 1 -> 10 + 1 -> 11
    // 3. result = 20


    cout << "num_1: " << num_1 << endl;
    cout << "result: " << result << endl;

    // pre-increment
    // num_1 = 11
    int result_2 = (++num_1) * 2;
    // 1. num_1 = num_1 + 1 -> 11 + 1 -> 12
    // 2. num_1 * 2 -> 12 * 2 -> 24
    // 3. result = 24

    cout << "num_1: " << num_1 << endl;
    cout << "result_2: " << result_2 << endl;

    num_1--;
    --num_1;

    // for fun -> don;t run this as code
    // int x = 5, y = 3, z = 9;
    // int result = (x++ * 3) - (++y + 3) * (z-- - 2) + (++x * 6)

    // pre/post decrement
    return 0;
}