// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 13: menu with switch and while

#include<iostream>

using namespace std;

// breakfast menu
// 1. coffee - 5.99
// 2. cinnamon roll - 2.99
// 3. fruit - 1.99
// 4. exit

// switch -> int, char; == 
// it is faster to use switch for  == comparisons

int main()
{
    int choice = 0;
    double budget = 6.50;

    // event controlled loop
    while(budget > 1.99) // do we know how many times this will run?
    {
        cout << "==============MENU==============" << endl;
        cout << "1. Coffee ---------------$5.99" << endl;
        cout << "2. Cinnamon Roll --------$2.99" << endl;
        cout << "3. Fruit ----------------$1.99" << endl;
        cout << "4. Exit" << endl;

        cin >> choice;
        switch(choice)
        {
            case 1: 
                {
                    budget = budget - 5.99;
                    cout << "You chose coffee. Your new budget is: " << budget << endl;
                    break;
                }
            case 2: 
                {
                    budget = budget - 2.99;
                    cout << "You chose cinnamon roll. Your new budget is: " << budget << endl;
                    break;
                }
            case 3: 
                {
                    budget = budget - 1.99;
                    cout << "You chose fruit. Your new budget is: " << budget << endl;
                    break;
                }
            case 4: 
                {
                    cout << "Goodbye! " << endl;
                    break;
                }
        }
    }

    return 0;
}