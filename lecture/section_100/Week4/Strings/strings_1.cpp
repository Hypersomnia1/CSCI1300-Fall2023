/*
Program to illustrate usage of strings - Part 1
*/

#include <iostream>
#include <string> // this is upto you to include or not! It works either way

using namespace std;

int main() {
    // Declare a string variable and initialize it
    string str = "Go buffs";

    // Print it to console exactly the same way you print integers, floats and booleans
    cout << "Value of str = " << str << endl;

    string empty_string; // this is equivalent to string empty_string = ""
    cout << "Empty string = " << empty_string << endl;

    // Let's say you need to take in a name from command line
    string name = "";
    // cout << "Enter a name:";
    // cin >> name;
    // cout << "Name entered = " << name << endl;

    // // But what's the problem with above?
    // // what if input contains multiple words?
    // cout << "Enter name again (but now with spaces):";
    // cin >> name;
    // cout << "Name entered = (using cin oeprator)" << name << endl;

    // // The below is used to clear anything in cin input stream (Don't need to remember this)
    // cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // // To solve this, use getline
    cout << "Enter name again (with spaces):";
    getline(cin, name);
    cout << "Name entered = (using getline function)" << name << endl;

}