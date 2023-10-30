#include <iostream>

using namespace std;

/*
    Program to build a menu for a FIFA game!
*/

int main() {
    cout << "FIFA 2023 !" << endl;

    int team_type; // Is it a national team, or a club team
    char team; // This is a team Identifier

    cout << "1. National Teams" << endl;
    cout << "2. Club Teams" << endl;
    cout << "Select your team type: (select the number): ";
    cin >> team_type;

    if (team_type == 1) {
        // The user selects a national team
        cout << "a. Argentina" << endl;
        cout << "b. Brazil" << endl;
        cout << "c. USA" << endl;

        cout << " Make a choice : (Make a character selection) " << endl;

        cin >> team;

        if (team == 'a' || team == 'A') {
            cout << "You chose Argentina!" << endl;
        }
        else if (team == 'b'  || team == 'B') {
            cout << "You chose Brazil!" << endl;
        }
        else if (team == 'c' || team == 'C')  {
            cout << "You chose USA!" << endl;
        }
    }
    else if (team_type == 2) {
        // The user selects a club team
        cout << "a. Manchested United" << endl;
        cout << "b. Liverpool" << endl;
        cout << "c. Chicago Fire" << endl;

        cout << " Make a choice : (Make a character selection)" << endl;

        cin >> team;

        // Complete the rest of the same logic we did in above if block

    }
    else {
        cout << "Make a right selection ! " << endl;
    }

    return 0;
}