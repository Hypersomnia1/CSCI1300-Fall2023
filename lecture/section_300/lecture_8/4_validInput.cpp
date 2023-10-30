// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 8: isValid function

#include<iostream>

using namespace std;

// program accepts numbers > 0

int isValidInput(int input)
{
    if(input <= 0)
    {
        return 1;
        // do not have couts and returns in the same function
    }
    else
    {
        return 0;
    }
}


int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    int valid = isValidInput(number);

    if(valid == 1)
    {
        cout << "enter valid input";
    }
    else{
        
    }


}