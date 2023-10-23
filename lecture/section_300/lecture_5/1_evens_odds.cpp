// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 5: if else if dem0

#include<iostream> 
using namespace std; 

// program to check if the number is even or odd

int main()
{
    int number = 0;

    cout << "Enter a number: ";
    cin >> number; // 10
    if(number == 0)
    {
        cout << number << " is zero" << endl;
    }
    // check if number is even
    else if(number % 2 == 0) // number % 2 == 0
    {
        cout << number << " is even" << endl;
    }
    // check if number is odd
    else // (number % 2 == 1) // number % 2 != 0
    {
        cout << number << " is odd" << endl;
    }


    // if()
    // {

    // }
    // else if()
    // {

    // }
    // else if()
    // {

    // }
    // else
    // {

    // }
    
    return 0;
}