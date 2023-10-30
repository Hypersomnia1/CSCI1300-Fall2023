// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 12: testing functions that return double

#include<iostream>
#include<cmath>
#include<cassert>
#include<iomanip>

using namespace std;
// default argument -> defining and initializng variables in the parameter list
bool doublesEqual(double a, double b, const double epsilon = 1e-14) // 14 digits after the decimal point
// 2.00000000000000000000 == 2
{
    // const double epsilon = 1e-2
    double c = a - b;
    return c < epsilon && -c < epsilon;
}

// common error 3.3

int main()
{
    double var = sqrt(2);
    double result = var * var; // 2
    cout << fixed << setprecision(20) << result << endl;
    assert(doublesEqual(result, 2)); 
    // 2 == 2.000000000000000000000
    return 0;
}