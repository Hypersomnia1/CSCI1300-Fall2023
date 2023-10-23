// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 8: isValid function

#include<iostream> 
using namespace std; 

int isValid(int input)
{
    if(input <= 0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int number = 0;
    cout << "Enter a number: " << endl;
    cin >> number;

    int valid = isValid(number);
    if(valid == -1)
    {
        // code for invalid input
        return 1;
    }
    else if(valid == 1)
    {

    }
    else
    {
       // more code
    }

    return 0;
}