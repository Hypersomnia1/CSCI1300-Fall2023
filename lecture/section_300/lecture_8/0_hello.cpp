// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 8: main function and return codes

#include<iostream> 
using namespace std; 

int main() // -> main function
{
    int number = 0;
    cout << "Enter a number: " << endl;
    cin >> number;
    if(number <= 0)
    {
        cout << "Enter valid input" << endl;
        return 1;
        // return code 1 indicates that something went wrong
        // return at this juncture also exits the program
    }
    else if(number > 10)
    {

    }

    return 0;
    // return code 0 -> indicates that your program ran successfully
}
