// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 14: email id validation

#include<iostream>

using namespace std;

// string traversal -> counting -> for loop

// csci1300 -> email? @
// accept user input for email_id(string)
// loop through all the letters in the email
//      check if letter is equal to @
//           print valid email
//     if @ is not present in email
//           print invalid email

int main()
{
    string email_id = "csci1300colorado.edu";
    // cout << "Enter email: ";
    // getline(cin, email_id);
    // csci1300 -> 

    // flag variable -> status/boolean check 
    // flag, valid, check, done

    bool flag = false; // 0

    int len = email_id.length(); // call it once and store it in a variable

    for(int i = 0; i < len; i++)
    {
        // cout << email_id[i] << endl;
        if(email_id[i] == '@')
        {
            // cout << "valid email" << endl;
            flag = true; // valid email
            break; // count controlled loops - terminate the loop
        }
        // invalid email
        // cout << i << endl;
    }

    // after the loop - check if you found @
    if(flag == true)
    {
        cout << "valid email" << endl;
    }
    else
    {
        cout << "invalid email" << endl;
    }
    
    return 0;
}