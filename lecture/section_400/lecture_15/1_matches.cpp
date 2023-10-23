// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 15: character matches in a string

#include<iostream>

using namespace std;

// program to count character matches in a given string
// string s = "csci1300";
// c -> 2
int main()
{
    //          01234567
    string s = "csci1300"; // accept user input
    // accept user input for charater match
    int count = 0;
    // print i through the string s
    // string_var[index] -> access individual letters in a string
    cout << s[3] << endl; // i
    // if accessed within a loop -> string_var[loop variable]

    // count number of c's inside string s

    // looping/ string traversal -> for loop 
    // 0 - length - 1(7)
    // length of s -> 8 letters

    // mississippi
    int len = s.length(); // call it once and save it in a variable

    //      1    ;   2    ;   3
    for(int i = 0; i < len; i++) // i < 8
    {
        if(s[i] == 'c')
        {
            count++; // count = count+1; count+=1;
        }
    }
    // 1st iteration -> 1, 2, loop body, 3
    // 2nd iteration -> 2, loop body, 3
    // 3rd iteration -> 2, loop body, 3


    // 2nd iteration -> 3, 2, loop body
    cout << "We found " << count << " number of c's" << endl;

    return 0;
}