// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 11: testing void functions

#include<iostream> 

using namespace std; 

// function to print a menu
void printMenu()
{
    cout << "================TARGET MENU==================" << endl;
    cout << "a. School Supplies" << endl; 
    cout << "b. Clothing" << endl;
    cout << "c. Electronics" << endl;
    cout << "d. Exit" << endl;
}

// function to print user choice
void printMenuChoice(char choice)
{
    if(choice == 'a')
    {
        cout << "you chose school supplies" << endl;
    }
    else if(choice == 'b')
    {
        cout << "you chose clothing" << endl;
    }
    else if(choice == 'c')
    {
        cout << "you chose electronics" << endl;
    }
    else if(choice == 'd')
    {
        cout << "Goodbye" << endl;
    }
    else // generic test for all other values; any value that is not a, b, c or d
    {
        cout << "Read the menu again. Not one of our menu options" << endl;
    }
}

int main()
{
    printMenu();
    // testing printMenuchoice function

    // since it is a void function we just call the function and add the expeted output as comments beside the function call

    // test 1 - option a
    printMenuChoice('a'); // you chose school supplies

    // test 1 - option b
    printMenuChoice('b'); // you chose clothing

    // test 1 - option c
    printMenuChoice('c'); // you chose electronics

    // test 1 - option d
    printMenuChoice('d'); // Goodbye

    // test 1 - invalid option 
    printMenuChoice('k'); // Read the menu again. Not one of our menu options

    return 0;
}


