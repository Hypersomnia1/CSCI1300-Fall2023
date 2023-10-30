#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    // Let's illustrate how getline works
    string a, b;
    cin >> a; // this stops as soon as it sees a white space
    cout << "You entered: " << a << endl;

    // when you use getline, remember to ignore the inputstream characters, that deletes
    // unncessary characters and clears it out
    cin.ignore(1000, '\n');
    getline(cin, b);
    cout << "You entered: " << b << endl;
    return 0;
}