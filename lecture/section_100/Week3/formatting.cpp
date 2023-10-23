/*
C++ Program to illustrate two commonly used manipulators - setw and setprecision
*/
#include <iostream>
#include <iomanip> // use this library to use setw, setprecision and fixed manipulators

using namespace std;

int main() {
    int x = 5;

    cout << endl; // I am just printing a new line for better readability
    cout << "Illustration of setw in C++ using the examples of relational and logical operators" << endl;
    /*
     Set Width - setw(number)
     ** Here we use setw(number) to set the width of the output
     ** Replace the number with a choice of your own and see the spaces it prints.
    */
    
    // Lets use setw(number) to print some boolean and logical operators and re-evaluate their results.
    cout << setw(30) << "Expression" << setw(20) << "Truth Value" << endl << endl;
    cout << setw(30) << "0 < 200 && 200 < 100" << setw(20) << (0 < 200 && 200 < 100) << endl;
    cout << setw(30) << "0 < 200 || 200 < 100" << setw(20) << (0 < 200 || 200 < 100) << endl;
    cout << setw(30) << "0 < 200 || 100 < 200" << setw(20) << (0 < 200 || 100 < 200) << endl;
    cout << setw(30) << "0 < 200 < 100" << setw(20) << (0 < 200 < 100) << endl;
    cout << setw(30) << "!(0 < 200)" << setw(20) << !(0 < 200) << endl;
    cout << setw(30) << "-10 && 10 > 0" << setw(20) << (-10 && 10 > 0) << endl;
    cout << setw(30) << "0 < x && x < 100 || x == -1" << setw(20) << (0 < x && x < 100 || x == -1) << endl;

    cout << endl << endl;
    /*
     Set Precision - setprecision(number)
     ** Here we use setprecision(number) to set the number of decimals we want after the decimal point for a flaoting point
     ** Default value is 6.
    */
    
    // cout << "Illustration of fixed and setprecision in C++" << endl;

    cout << "Printing floating point numbers using default output formats" << endl;
    cout << 12345678.12345678 << endl; // Does it print exactly like this?

    cout << fixed; // Tells the C++ compiler to print all floating point numbers using decimal notation
    // Ensures every floating point number is printed using decimal notation after this statement (it sticks)

    cout << "Printing floating point numbers after fixing to decimal notation using fixed manipulator" << endl;
    cout << 12345678.12345678 << endl; // Well ok, but does it print all the decimals??

    cout << "Printing floating point numbers using setprecision" << endl;
    cout << setprecision(2) << 12345678.987 << endl; // How about now?
    // set precision formatting also sticks - all decimal values printed after will use that number of decimal digits.

    cout << endl; // I am just printing a new line for better readability
    return 0;
}
