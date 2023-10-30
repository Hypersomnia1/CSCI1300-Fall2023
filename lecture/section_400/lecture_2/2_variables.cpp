// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 2: working with variables

#include <iostream>

using namespace std;

// how do comments work?

int main()
{

    // A variable must have a type and a name. 
    // You can assign it an initial value but it's not mandatory

    // variable definition/declaration
    // data_type name;
    // int num1;
    int num2 = 7;
    cout << num2 << endl;

    // variable initialization
    // data_type name = value;
 
    // data types: boolean, char, int, float, double, string
    // 1 byte = 8 bits

    // boolean -> 1 bit -> 0/1
    // true = 1; false = 0;
    bool num3 = 0;
    bool num4 = true;

    cout << num3 << endl; 
    cout << num4 << endl;

    // char  -> 1 byte
    char letter1 = 'a';
    // char letter2 = 'abcd';

    cout << letter1 << endl;
    // cout << letter2 << endl;


    // integer: positive or negative whole numbers
    // short int -> 2 bytes
    // int       -> 4 bytes ( -2,147,483,648 to +2,147,483,647)
    // long int  -> 8 bytes

    long int num10 = -345678987654345678;


    // positive whole numbers
    // unsigned int      -> 4 bytes
    // unsigned long int -> 8 bytes


    // decimal/floating point data
    // float       -> 4 bytes  (7 decimal digits of precision)
    // double      -> 8 bytes  (15 decimal digits of precision)
    // long double -> 16 bytes (~30 decimal digits of precision)

    float num5 = 23.6;
    double num6 = 123.67990;


    // one definition per variable


    // Modifying the value of variable via assignment statement. cout to see the updated value
    
    
    // cannot store character data in a double variable
 
    // Error: Using undefined variables
    var100 = 100; // var100 is not defined


    // Ranges for Data Types: https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170 
    
    return 0;
}