// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 7: built-in functions

// function -> takes something and turns it into something else, math, does something, inputs and outputs

#include<iostream> 
#include<iomanip>
#include<cmath> // sqrt, pow

using namespace std; 

// 2 types of functions
// built - in function -> are written by someone else and we can access that through external libraries that we add to our programs using the include directive

int main() // -> main function
{
    // () -> function
    // setprecision() is a function

    double number = 0;

    cout << "Enter a number: ";
    cin >> number;

    cout << "square root: " << sqrt(number) << endl; // function call
    // sqrt(30);
    // functionName(function arguments/actual parameters/function inputs);
    // input and output(most cases)

    // 2 ^ 3 = 2 * 2 * 2
    // pow(base, exponent);
    int a = 2, b = 3;
    double answer = pow(a, b); // function call
    
    cout << answer << endl;
    
    return 0;
}