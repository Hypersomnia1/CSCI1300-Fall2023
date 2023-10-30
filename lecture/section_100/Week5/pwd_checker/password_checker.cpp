#include <iostream>

using namespace std;

int main() {
    string password = "secret$auce147";

    string user_input;

    cout << "Enter password:";
    cin >> user_input;

    int attempts = 1;
    
    while (user_input != password) {
        cout << "Password incorrect. Enter again!" << endl << endl;
        cout << "Enter password:";
        cin >> user_input;

        attempts = attempts + 1;
        if (attempts >= 3) {
            cout << "3 unsuccessful attempts!" << endl;
            return 1; // this kicks you out of the program
        }
    }

    cout << "Authentication successful!" << endl;

    return 0;
}