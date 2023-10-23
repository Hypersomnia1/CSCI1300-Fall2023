// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 12: pre/post increment and decrement

#include<iostream>

using namespace std;

// section 2.2.2
// adding/subtracting a value of 1 in a variable
int main()
{
    // pre/post increment
    int var_1 = 10;
    // var_1 = var_1 + 1;
    // var_1 += 1; // shortcut to line 11

    // var_1++; // same as line 11 // post increment
    // calculating and returning a value
    // return values

    // 10 * 2
    // int x = var_1 * 2; // 20
    // var_1 = 10, x = 20
    // x+=2
    int result = var_1++ * 2; // 20
    // 1. var_1 * 2 = 20
    // 2. var_1 = var_1 + 1; // var_1 = 11
    // 3. result = 20
    cout << "var_1: " << var_1 << endl;
    cout << "result: " << result << endl;

    int result_2 = ++var_1 * 2; // 20
    // 1. var_1 = var_1 + 1; // var_1 = 11 + 1 + 12
    // 2. var_1 * 2
    // 3. result_2 = 24
    cout << "var_1: " << var_1 << endl;
    cout << "result_2: " << result_2 << endl;
    
    // int a = 3, b = 5, c = 6;
    // int x = (a++ * 2) + (++b + 3) - (--c * 2) + (a++  * --b)

    // pre/post decrement

    return 0;
}