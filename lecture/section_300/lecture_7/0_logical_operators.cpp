// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 7: operator evaulation examples

#include <iostream>
using namespace std;

// boolean operators

int main()
{
    int y = -23;
    int x = 17;

    bool var1 = ( x < y || x != 0); // 0 || 1 => 1
    cout << "the value of var1 is: " << var1 << endl;

    cout << "example evaluations" << endl;

    cout << "(0 < 200 && 200 < 100) = " << (0 < 200 && 200 < 100) << endl; // 1 && 0 = 0
    cout << "(0 < 200 || 200 < 100) = " << (0 < 200 || 200 < 100) << endl; // 1
    cout << "(0 < 200 || 100 < 200) = " << (0 < 200 || 100 < 200) << endl; // 1
    cout << "(0 < 200 < 100) = " << (0 < 200 < 100) << endl; // 0
    // 1 < 100  -> 1 // 0 < 200 && 200 < 100
    cout << "!(0 < 200) = " << !(0 < 200) << endl; // !(1) = 0

    x = 1; // update value of x
    cout << "(x == 1 && 10 > 0) = " << (x == 1 && 10 > 0) << endl; // 1 
    cout << "((0 < x && x < 100) || x == -1) = " << ((0 < x && x < 100) || x == -1) << endl; // (1 && 1) || 0 = > 1 || 0 = 1
    cout << "(((!0) < x && x < 100) || x == -1) = " << (((!0) < x && x < 100) || x == -1) << endl; // (0 && 1) || 0 => 0 || 0 = 0

    
    return 0;
}