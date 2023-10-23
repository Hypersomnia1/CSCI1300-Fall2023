/*
C++ Program to illustrate the concept of functions (Printing if a number is even or odd)
*/

#include <iostream>

using namespace std;


void printEvenOrOdd(int num) {
    // now comes the logic here
    int remainder = num % 2;

    // if (remainder == 0) {

    // }
    // else if (remainder == 1) {

    // }

    switch (remainder) {
        case 0:
            cout << "It's an even number" << endl;
            break;
        case 1:
            cout << "It's an odd number" << endl;
            break;
    }
}

int main() {

    int number;

    number = 100;

    // The logic for the even or odd would be directly down here
    printEvenOrOdd(number);
        
    return 0;
}