// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 13: login ID verification

#include<iostream>

using namespace std;

// program to check if the login ID is valid
// input -> login id
// user gets 3 attempts to login
// loop as long as they have attempts remaining
//       check if login ID matches ID in our records 
//             print successful
//       if login doesn't match
//             print try again, attempts remaining, 
//             remove an attempt
//             provide textbox for login ID
// end of program

int main()
{
    string login_name;
    int attempts = 5; // loop variable
    string actual_login = "spongebob_2023";

    // user input
    cout << "Enter login ID: ";
    getline(cin, login_name);

    while(attempts > 0)
    {
        if(login_name == actual_login)
        {
            cout << "successful" << endl;
            // get out of the loop in every branch
            attempts = 0; // use the loop variable
        }
        else
        {
            attempts--; // attempts = attempts - 1; --attempts;
            cout << "Login doesn't match our records. Attempts remaining: " << attempts << "Please try again \n Login ID: " << endl;
            getline(cin, login_name);
        }
    }
    return 0;
}