/*
Program to illustrate ASCII characters
*/

#include <iostream>

using namespace std;

int main() {
    /* ASCII - American Standard Code for Information Interchange
    ** ASCII assigns a unique numeric value (between 0 and 127) to each of the 128 possible characters
    ** including alphabets (A-Z and a-z), digits (0-9), punctuation symbols, and control characters.
    ** allowing computers to represent and exchange data in a standardized way
    */

    // Let's see ASCII values for some characters

    // -------------------Alphabets-------------------------------
    char alphabet_A = 'A';
    cout << alphabet_A << " -> " << (int)alphabet_A << endl;

    char alphabet_B = 'B';
    cout << alphabet_B << " -> " << (int)alphabet_B << endl;

    char alphabet_Z = 'Z';
    cout << alphabet_Z << " -> " << (int)alphabet_Z << endl;

    // So alphabets A through Z have values 65 to 90.

    char alphabet_a = 'a';
    cout << alphabet_a << " -> " << (int)alphabet_a << endl;

    char alphabet_b= 'b';
    cout << alphabet_b << " -> " << (int)alphabet_b << endl;

    char alphabet_z = 'z';
    cout << alphabet_z << " -> " << (int)alphabet_z << endl;

    // So alphabets a through z have values 97 to 122.
    // ------------------------------------------------------

    // -------------------Digits--------------------------------
    char digit_0 = '0';
    cout << digit_0 << " -> " << (int)digit_0 << endl;

    char digit_1 = '1';
    cout << digit_1 << " -> " << (int)digit_1 << endl;

    char digit_9 = '9';
    cout << digit_9 << " -> " << (int)digit_9 << endl;

    // So digits 0 through 9 have values 48 to 57.
    // ------------------------------------------------------

    // --------------Special Characters--------------------------------
    char special_char1 = '%';
    cout << special_char1 << " -> " << (int)special_char1 << endl;

    char special_char2 = '*';
    cout << special_char2 << " -> " << (int)special_char2 << endl;

    char special_char3 = '+';
    cout << special_char3 << " -> " << (int)special_char3 << endl;

    char special_char4 = '~';
    cout << special_char4 << " -> " << (int)special_char4 << endl;

    return 0;
}