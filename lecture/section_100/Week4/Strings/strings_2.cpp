/*
Program to illustrate string functions and operations - Length, Substrings, Concatenations, Find and Replace
*/

#include <iostream>

using namespace std;

int main() {
    string str = "Go Buffs!";

    cout << "Value of the string = " << str << endl;

    // Length of the string - (how long is it)
    // Note that length is the name of a function, but it's a function available to invoke on string variables
    int string_length = str.length();

    // Note that the length counts all the whitespaces too.
    cout << "Length of the string = " << string_length << endl;

    // Let's review how the string is stored

    // Substrings - Extracting parts of the string
    string part_of_string = str.substr(0, 5);
    cout << "Part of the string = " << part_of_string << endl;

    // Extract the part of the string that says BUFFS.
    part_of_string = str.substr(3, 5);
    cout << "Part of the string = " << part_of_string << endl;

    // Concatenation
    string str1 = "Go";
    string str2 = "Buffs";

    cout << "String concatenation = " << str1 + str2 << endl;
    cout << "String concatenation (with spaces) = " << str1 + " " + str2 + "!" << endl;

    // Find and Replace Functions
    string larger_string = "Use the find function to find the occurence of a substring within a string";
    string word_to_find = "occurence";

    int position = larger_string.find(word_to_find);

    cout << "Word found at position = " << position << endl;
    // If the word is not found, the position would be equal to -1.

    // Replace the word with "usage"
    cout << "Original String = " << larger_string << endl;

    string new_word = "usage";
    larger_string.replace(position, word_to_find.length(), new_word);

    cout << "Modified String = " << larger_string << endl;

    return 0;
}