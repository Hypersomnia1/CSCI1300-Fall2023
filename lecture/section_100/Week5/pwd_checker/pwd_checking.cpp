#include <iostream>

using namespace std;

int main() {
    string input_password;
    string secret_password = "123456";

    // use this as a counter variable
    int number_of_tries = 3;

    do {
        cout << "Enter password:";
        cin >> input_password;

        if (secret_password == input_password) {
            cout << "Unlocked successfully" << endl;
            return 0; // this helps me stop the program and end it correctly
        }
        else {
            cout << "Failed attempt" << endl;
            number_of_tries--;
        }
    } while (input_password != secret_password && number_of_tries > 0);

    cout << "You have failed all attempts" << endl;
    
    return 0;
}