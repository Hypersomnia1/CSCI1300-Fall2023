// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 10: asserts

#include<iostream>
using namespace std;

// functions to check if the input is an uppercase letter

/**
 * @brief 
 * 
 * @param letter 
 * @return true 
 * @return false 
 */
bool isUpperCase(char letter); // function prototype/signature

void printUpperCase(char letter); // function prototype/signature

void testIsUpperCase(); // function to write asserts for isUpperCase function

// above main()

int main()
{
    char letter = 'm';
    // cout << letter << endl;
    // printUpperCase is a void function
    // function call -> nameOfFunction(arguments)
    printUpperCase(letter); 

    // isUpperCase returns a boolean value
    // function call -> bool_variable = nameOfFunction(arguments)
    bool check = isUpperCase(letter);
    cout << check << endl;

    // calling testUpperCase to run assertions
    testIsUpperCase();

    return 0;
}

// generic function -> re-used as it is in many programs
bool isUpperCase(char letter)
{
    if(letter >= 65 && letter <=90)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// specific function -> can be used for one purpose - print if letter is vowel or not
void printUpperCase(char letter)
{
    if(letter >= 65 && letter <=90)
    {
        cout << "It is an upper case letter" << endl;
    }
    else
    {
        cout << "It is not an upper case letter" << endl;
    }
}


void testIsUpperCase()
{
    // assert (function_returned_value == expected function output)
    assert(isUpperCase('M') == true);
    assert(isUpperCase('m') == 0);
    assert(isUpperCase('4') == false);
    assert(isUpperCase(65) == true);
    assert(isUpperCase('%') == false);

}