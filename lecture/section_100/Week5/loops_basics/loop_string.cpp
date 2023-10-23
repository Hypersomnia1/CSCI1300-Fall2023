#include <iostream>

using namespace std;

int main() {
    string s = "The big bang theory";

    int words = 0, chars = 0;

    for (int i=0; i<s.length(); i++) {
        // that magical access is s[i]
        cout << s[i] << " ";
        // check if the character is a space, if its then its probably a word to be added
        if (s[i] == ' ') {
            words++;
        }
    }
    cout << endl;

    cout << "Number of words = " << words+1 << endl;
    cout << "Number of chars = " << s.length() - words << endl;

    return 0;
}