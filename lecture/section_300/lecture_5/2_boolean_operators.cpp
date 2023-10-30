// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 5: boolean operators

#include<iostream> 
using namespace std; 

int main()
{
    // logical/boolean operators
    
    // && , ||, !
    // AND
    // (10 > 0) && (11 > 0) = true && true = true
    // 10 > 0 && 11 < 0 = true && false = false

    // OR - ||
    // 10 > 0 || 11 > 0 = 1 || 1 = 1
    // 10 > 0 || 11 < 0 = 1 || 0 = 1

    // ! - NOT
    // !(10 > 0) = !(1) = 0

    // 1, 2, 3.....9 -> 1 digit numbers
    // 10, 11, 12,.....99 -> 2 digit numbers

    int number = 0;

    cout << "Enter a positive number: ";
    cin >> number; // -100

    // validating user input
    if(number <= 0)
    {
        cout << "ERROR! You can only enter a positive number. Read the instructions and TRY AGAIN!" << endl;
    }
    // number < 10
    if(number > 0 && number < 10) // 
    {
        cout << number << " is a 1 digit number" << endl;
    }
    if(number >= 10 && number < 100) // 
    {
        cout << number << " is a 2 digit number" << endl;
    }

    if(number >= 100 && number < 1000) // 
    {
        cout << number << " is a 3 digit number" << endl;
    }

    return 0;
}