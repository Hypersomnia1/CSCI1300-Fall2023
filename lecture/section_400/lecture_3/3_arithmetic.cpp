// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 3: basic arithmetic

#include<iostream>

using namespace std;

int main()
{
    // + - * /
    int x = 10, y = 4;
    int sum = 0;
    sum = x + y;
    cout << "Addition: " << sum << endl;

    // subtraction -
    cout << x - y << endl; 
    
    // multiplication
    cout << x * y << endl; 

    // division (/) -> quotient 
    double div =  x / y; 
    cout << "Division = " << div << endl;

    // division (%) -> remainder
    int remainder =  x % y; 
    cout << "Division = " << remainder << endl;
    return 0;
}