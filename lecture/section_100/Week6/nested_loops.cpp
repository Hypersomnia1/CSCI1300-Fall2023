#include <iostream>

using namespace std;

/*
Patterns - This program will print certain interesting character patterns
*/

int main() {
    
    /*
    1.  * * * * *
        * * * * *
        * * * * *
        * * * * *
        * * * * *
    */

    // Simple approach
    // print 5 cout statements

    // cout << "Approach number 1" << endl;
    // cout << "* * * * *" << endl;
    // cout << "* * * * *" << endl;
    // cout << "* * * * *" << endl;
    // cout << "* * * * *" << endl;
    // cout << "* * * * *" << endl;

    // cout << endl;
    // cout << endl;

    

    // // Loop approach - can we use a loop to do this?
    // // We know that "* * * * *" is printed 5 times
    // // Let's explore the options

    // cout << "Approach number 2" << endl;

    // // 1. Let's look at a single for loop
    // for (int i=0; i<5; i=i+1) {
    //     cout << "* * * * *" << endl;
    // }

    // cout << endl << endl;
    // cout << "Approach number 3" << endl;

    // for (int i=0; i<5; i++) { // Outer loop - This runs 5 times
    //     // This needs to print 5 characters
    //     for (int j=0; j<10; j++) { // Inner loop - This runs 10 times
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Other patterns
    /*
    2.  @ * * * *
        * @ * * *
        * * @ * *
        * * * @ *
        * * * * @
    */

    // The top for loop is for printing the rows
    for (int i=0; i<5; i++) {
        // The inner for loop is for printing the content of the row
        for (int j=0; j<5; j++) {
            if () {
                cout << "@ ";
            }
            else {
                cout <<"* ";
            }
        }
        cout << endl;
    }



    // Other patterns
    /*
    3.  * * * * @
        * * * @ *
        * * @ * *
        * @ * * *
        @ * * * *
    */

   /*
    4.  @
        * @ 
        * * @
        * * * @
        * * * * @
    */

    
    return 0;
}