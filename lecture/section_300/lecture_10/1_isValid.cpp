// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 10: testing with assert

#include<iostream>
// assert statement -> macro defined in the cassert library
#include<cassert> // assert.h

using namespace std;

int isValid(int number)
{
    if(number <= 0)
    {
        return -2; // making up our own return codes
    }
    else
    {
        return 2;
    }

}

// write the assertions in its own function
void testIsValid()
{

    // assert(LHS == RHS); -> functions that have a non-void return type
    // LHS -> function call with the arguments/inputs
    // RHS -> expected function output

    // test case 1 -> valid input of 3 (>0)
    assert(isValid(3) == 2);
    cout << "Test case 1: passed" << endl;

    // test case 2 -> invalid input of -3 (<0)
    assert(isValid(-3) == -2);
    cout << "Test case 2: passed" << endl;

    // test case 3 -> edge/boundary input of 0 (=0)
    assert(isValid(0) == -2); // 0 is invalid
    cout << "Test case 3: passed" << endl;
    // assert failes -> terminates your program

    // test case 4 -> valid input of 1000000 (>0)
    assert(isValid(1000000) == 2);
    cout << "Test case 4: passed" << endl;
}

// checking if the function is working correctly before we integrate it into main()/ user input

int main()
{
    // int number = 0;
    // cout << "Enter number: ";
    // cin >> number;

    // do the rest of the question 

    testIsValid();

    // black box testing -> asserts and Coderunner will work this way
    // give input, check if the function output matches the expected output
    // we do not know how the function is implemented
    // we know the function prototype + return value
    // int isValid(int) returns -2 and 2

    // white box testing -> we have knowledge about the implementation
    // global variables, data types match the values

    return 0;
}