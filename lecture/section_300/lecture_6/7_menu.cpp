// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 6: nested conditionals

#include<iostream>

using namespace std;

// print a nested menu

int main()
{
    char choice;

    cout << "============TARGET MENU============" << endl;
    cout << "a. Furniture" << endl; // chairs, rugs, lamp
    cout << "b. School supplies" << endl;
    cout << "c. Toiletries" << endl;
    cout << "d. Exit" << endl;

    cout << "Choose a category: ";
    cin >> choice;

    if( choice == 'a')
    {
        char furniture_choice;

        cout << "you chose furniture" << endl;
        cout << "============FURNITURE MENU============" << endl;
        cout << "a. chair" << endl; // chairs, rugs, lamp
        cout << "b. rugs" << endl;
        cout << "c. lamps" << endl;
        cout << "d. exit" << endl;

        // accept the user choice for furniture - one more if
        cout << "Choose a furnture type: ";
        cin >> furniture_choice;
        if(furniture_choice == 'a')
        {
            cout << "you chose chairs" << endl;
        }
        else if(furniture_choice == 'b')
        {
            cout << "you chose rugs" << endl;
        }
        else if(furniture_choice == 'c')
        {
            cout << "you chose lamps" << endl;
        }
        else
        {
            cout << "goodbye!" << endl;
        }

    }
    else if( choice == 'b')
    {
        cout << "you chose school supplies" << endl;
        // add code for school supplies menu
    }
    else if( choice == 'c')
    {
        cout << "you chose toiletries" << endl;
        // add code for toiletries menu
    }
    else if(choice == 'd')
    {
        cout << "Goodbye!" << endl;
    }
    else // generic test for all other values; any value that is not a, b, c or d
    {
        cout << "That choice doesn't exist. Read the menu for the correct options" << endl;
    }


    // if ()
    // {
    //    if()
        // {

        // }
    // }

    return 0;
}
