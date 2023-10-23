#include <iostream>

using namespace std;

// Program to accept an input from the user and only if it is a positive number
int main() {

    int number = 0;

    while (number <= 0) {
        cout << endl <<  "Enter the number:";
        cin >> number;
    }

    cout << "You entered a positive number" << endl;

    return 0;
}