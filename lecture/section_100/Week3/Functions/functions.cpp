/*
C++ Program to illustrate the concept of functions
*/

#include <iostream>

using namespace std;

/*
this function greets two users using cout statement
*/
int greetUser(string name, string name2) {
    cout << "Hello " << name << endl;
    cout << "Hello " << name2 << endl;
    return 0;
}

int main() {

    // // Let's print hello as we have learnt so far!
    // cout << "Hello" << endl;

    // // Let's create a name variable and greet the person
    // string name = "John";
    // cout << "Hello " << name << endl;

    // // Let's update the name and then greet the new person now
    // string name2 = "Mark";
    // cout << "Hello " << name2 << endl;

    string x1 = "Mark", x2 = "Walberg";
    // This is how you would call a function
    greetUser(x1, x2);

    // Let's update it again!
    // string name3 = "Steve";
    // cout << "Hello " << name << endl;

    /* Greeting the user, as we saw above requires cout statements each time we need to greet. 
    ** Can we identify what's common here across all the lines of code... and sort of pull it out into a block of its own?
    */

    return 0;
}