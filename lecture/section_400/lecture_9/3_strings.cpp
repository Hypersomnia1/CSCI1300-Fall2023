// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 9: strings

#include<iostream>
#include<string> // a lot of built-in string manipulation and other functionality

using namespace std;

int main()
{
    string name;
    cout << "Enter name: ";
    // getline() -> takes in two arguments -> cin, string_variable
    getline(cin, name); // -> new line, enter key, return key, \n
    // do not use cin and getline in the same program
    cout << name << endl;

    string first_name = "Spongebob";
    string last_name = "Squarepants";
    // string space = " ";

    string full_name = first_name + " " + last_name;
    // cannot concatenate literals -> line 25
    // string new_string = "abc " + "xyz"; // do not do this

    cout << full_name << endl;

    // length() -> returns the number of characters in the string/length of the string

    unsigned int len = full_name.length(); // no arguments for length()
    // length(full_name); - will not work

    cout << len << endl;

    // S p o n g e b o b   S  q  u  a  r  e  p  a  n  t  s // 
    // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 

    // index value -> location of a character inside a string
    // index value is indicated within []

    char letter = full_name[9]; 
    cout << letter << endl;

    // substr() -> hw 4 and project 1
    // extracts a portion of the given string

    // string_var1 = string_var.substr(starting_index, number_of_characters);
    // string_var1 = string_var.substr(starting_index);

    string new_string;

    new_string = full_name.substr(0, 6); // Sponge
    cout << new_string << endl;

    new_string = full_name.substr(10, 6); // Square
    cout << new_string << endl;

    new_string = full_name.substr(16, 5); // pants
    cout << new_string << endl;

    new_string = full_name.substr(16); // pants
    cout << new_string << endl;

    new_string = full_name.substr(6); // bob Squarepants
    cout << new_string << endl;

    return 0;
}