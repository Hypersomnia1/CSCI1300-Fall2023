/*
Do while loops - Application to a menu based program
*/

#include <iostream>

using namespace std;

int main() {

    // Put your menu items here
    int choice;

    // The below do while loop prints the menu to the user, as long as the user hasn't decided to quit
    do {
        cout << "-----------------------------" << endl;
        cout << "My banking application!!!" << endl;
        cout << "-----------------------------" << endl;

        cout << "1. Check your balance"<< endl;
        cout << "2. Withdraw"<< endl;
        cout << "3. Deposit"<< endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;
        cout << "You chose option " << choice << endl << endl;

        // decide how you do the rest of the program
        // for instance, calling a withdraw function if option was 2, or deposit for option 3

    } while (choice != 4);

    cout << "Exiting" << endl;

    return 0;
}