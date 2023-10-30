// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 13: login ID verification

#include<iostream>

using namespace std;

// program to check if login ID is valid
// accept login ID
// user gets 3 attempts
// loop as long as they have attempts remaining
//       check if login ID matches ID in our records 
//             print successful
//       if login doesn't match
//             print try again, attempts remaining, 
//             remove an attempt
//             provide textbox for login ID
// exit program


int main()
{
    string login_name;
    int attempts = 0; // assume they have 3 attempts
    string actual_login = "patrick_2023";

    // prompt for user input

    cout << "Enter login ID: ";
    getline(cin, login_name);

    while(attempts < 3)
    {
        if(login_name == actual_login)
        {
            cout << "successful" << endl;
            // loop terminates at every branch
            attempts = 3; // use the condition
            // return 1
        }
        else
        {
            attempts++;
            cout << "Attempts remaining: " << 3 - attempts << endl;
            cout << "Doens't match our records. Try again. Login ID: ";
            getline(cin, login_name);
        }
    }
    return 0;
}