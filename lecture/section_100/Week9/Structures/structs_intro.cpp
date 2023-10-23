#include <iostream>

using namespace std;

// 1. Create the blueprint for your new data type
struct Contact {
    string name;
    string email;
};

// Remember that structures variables are passed by values
// any changes you make to the variable, will not reflect outside of it
void printStructure(Contact c) {
    cout << c.name << " - " << c.email << endl;
}

int main() {
    // 2. Create a variable of the new data type
    Contact c1;

    // 3. Print the values of the structure variable
    printStructure(c1);

    // 4. Set the member values for the variable
    c1.name = "John";
    c1.email = "john@abc.com";

    printStructure(c1);
    
    // 5. Create a second variable and initialize it on the same line
    Contact c2 = {"Mark", "mark@abc.com"};

    // 6. Print the values of the second structure variabe
    printStructure(c2);

    // 7. Change the name of second contact
    c2.name = "Joe";

    // 8. Check if the first and the second contacts are the same
    // remember to check all data members to check for equality of two structure variables
    if (c1.name == c2.name && c1.email == c2.email) {
        cout << "Contacts are the same" << endl;
    }

    // 9. create a copy of the structure
    Contact c3 = c1;
    printStructure(c3);
    
    return 0;
}