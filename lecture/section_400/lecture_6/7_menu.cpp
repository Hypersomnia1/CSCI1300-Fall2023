// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 6: nested conditionals

#include<iostream> 

using namespace std; 

// program to print a menu

int main()
{
    char choice;

    cout << "================TARGET MENU==================" << endl;
    cout << "a. School Supplies" << endl; // books, pencils, backpack
    cout << "b. Clothing" << endl;
    cout << "c. Electronics" << endl;
    cout << "d. Exit" << endl;

    cout << "Choose a category: ";
    cin >> choice;

    if(choice == 'a')
    {
        char supplies_choice;

        cout << "you chose school supplies" << endl;
        cout << "=============SCHOOL SUPPLIES MENU===============" << endl;
        cout << "a. Books" << endl; // books, pencils, backpack
        cout << "b. Pencils" << endl;
        cout << "c. Backpack" << endl;
        cout << "d. exit" << endl;

        cout << "Choose school supplies: ";
        cin >> supplies_choice;
        if(supplies_choice == 'a')
        {
            cout << "you chose books" << endl;
        }
        else if(supplies_choice == 'b')
        {
            cout << "you chose pencils" << endl;
        }
        else if(supplies_choice == 'c')
        {
            cout << "you chose backpack" << endl;
        }
        else 
        {
            cout << "goodbye!" << endl;
        }
    }
    else if(choice == 'b')
    {
        cout << "you chose clothing" << endl;
        // add code for clothing menu
    }
    else if(choice == 'c')
    {
        cout << "you chose electronics" << endl;
        // add code for electronics menu
    }
    else if(choice == 'd')
    {
        cout << "Goodbye" << endl;
    }
    else // generic test for all other values; any value that is not a, b, c or d
    {
        cout << "Read the menu again. Not one of our menu options" << endl;
    }

    // if()
    // {
    //     if()
    //     {
    //         if()
    //         {

    //         }
    //     }
    // }

    return 0;
}


