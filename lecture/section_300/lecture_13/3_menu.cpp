// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 13: menu with switch and while

#include<iostream>

using namespace std;

// breakfast menu
// bagel - 3.99
// coffee - 4.99
// tea - 2.99

// switch -> int, char; == 
// it is faster to use switch for  == comparisons

int main()
{
    int choice = 0;
    double budget = 5.45;

    while(budget > 0) // budget
    {
        cout << "========MENU==========" << endl;
        cout << " 1. Bagel ------------$3.99"<< endl;
        cout << " 2. Coffee ------------$4.99"<< endl;
        cout << " 3. Tea ------------$2.99"<< endl;
        cout << " 4. Exit "<< endl;
        // check if they can afford it before reducing budget

        cin >> choice;
        switch(choice)
        {
            case 1: 
            {
                budget = budget - 3.99;
                cout << "You chose bagels. Your current budget is " << budget;
                break;
            }
            case 2: 
            {
                budget = budget - 4.99;
                cout << "You chose coffee. Your current budget is " << budget;
                break;
            }
            case 3: 
            {
                budget = budget - 2.99;
                cout << "You chose tea. Your current budget is " << budget;
                break;
            }
            case 4: cout << "doesn't exist. Goodbye!" << endl;
                break;
        }
        // getting input again
        // choice = 1; budget 1.46
    }
    return 0;
}