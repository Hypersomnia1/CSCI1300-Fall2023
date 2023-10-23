/*
Input Validation - Write a program to accept age from user (but the number must be positive only)
*/

#include <iostream>

using namespace std;

int main() {

    // a. Define the variables needed
    int age = 0;

    // b. We need to only accept positive numbers (1,2,... or anything else).
    // So think about what the condition should be...
    // Yes, prompt the user to enter age, if age is not in the correct range of values
    while (age <= 0) {
        cout << "Enter age: ";
        cin >> age;
    }

    cout << "Received a valid input for age" << endl;
    cout << "Age: " << age << endl;
    
    return 0;
}