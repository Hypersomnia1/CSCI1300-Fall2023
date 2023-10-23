// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 8: isVowel function

#include<iostream> 
using namespace std; 

// program to check if the user input is a vowel or consonant

bool isVowel(char letter)
{
    // variable letter is inside isVowel
    if ((letter == 'a') || (letter == 'e') || letter == 'i' || letter == 'o' || letter == 'u' || (letter == 'A') || (letter == 'E') || letter == 'I' || letter == 'O' || letter == 'U')
    {
        // DO NOT print and return in the same function
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    char letter; 
    // variable letter is inside main

    cout << "Enter a letter: ";
    cin >> letter;

    /**
     * call the isVowel function
     * if it is a vowel -> print it is a vowel
     * if it is not a vowel -> print not a vowel
     */

    bool check = isVowel(letter);

    if(check) // check is boolean variable // check == true
    {
        cout << "It is a vowel" << endl;
        // more computations if needed. our function is quite generic here and can be re-used as is in many programs
    }
    else
    {
        cout << "It is not a vowel" << endl;
    }

    return 0;
}