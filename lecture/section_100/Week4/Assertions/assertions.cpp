/*
Program to illustrate the use of assertions
*/

/*
Let's write a program that calculates the square of a number
*/


#include <iostream>
#include <cassert>

using namespace std;

int getSquare(int);

int main() {
    int number = 19;
    // cin >> number;
    int square_of_num = getSquare(number);

    // Assertions are equaivalent to saying "No matter what... I know that the value should be..."
    assert(square_of_num == 361);

    cout << "The above assertion passed!";

    // Rest of the program is below
    /*
    *******
    *******
    *******
    */
    cout << "The square of the number " << number << " = " << square_of_num << endl;
}

int getSquare(int number) {
    int square_of_num = number * number;
    return square_of_num;
}