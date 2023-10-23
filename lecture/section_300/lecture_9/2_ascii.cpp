// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 9: ascii codes, function prototype, generic vs specific functionality, function calls

#include<iostream>
using namespace std;

// functions to check if the input is an uppercase letter

bool isUpperCase(char letter); // function prototype/signature

void printUpperCase(char letter); // function prototype/signature

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