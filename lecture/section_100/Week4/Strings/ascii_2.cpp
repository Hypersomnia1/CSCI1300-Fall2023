#include <iostream>

using namespace std;


// Function Prototypes
bool isUpperCase(char ch);

bool isLowerCase(char ch);

bool isDigit(char ch);

int main() {
    char ch;
    cin >> ch;

    if (isUpperCase(ch)) {
        cout << "It's an uppercase" << endl;
    }
    else if (isLowerCase(ch)) {
        cout << "It's a lowercase" << endl;
    }
    else if (isDigit(ch)) {
        cout << "It's a digit" << endl;
    }
    else {
        cout << "Some other special character" << endl;
    }

    return 0;
}

bool isUpperCase(char ch) {
    // Checks if ch is lying between a specific range
    if (ch >= 65 && ch <= 90) {
        return true;
    }
    return false;
}

bool isLowerCase(char ch) {
    // Checks if ch is lying between a specific range
    if (ch >= 97 && ch <= 122) {
        return true;
    }
    return false;
}

bool isDigit(char ch) {
    if (ch >= 48 && ch <= 57) {
        return true;
    }
    return false;
}