#include<iostream>
#include "Pokemon.h"

using namespace std;


int main()
{
    Pokemon p; // what is happening in this line -> implicit call to default constructor
    
    // An instance(object) of class Pokemon is constructs and is called p.
    // p ill have 6 attributes; 
    // numeric attributes can have 0 or garbage
    // char, string, vector will be empty or null
    // has some initial value

    Pokemon c = Pokemon(); // explicit call to default constructor

    cout << p.getAttack() << endl << p.getDefense() << endl << p.getHP() << endl << p.getName() << endl;

    // a member function that the compiler provides by default and it constructs the object (initializes attributes to garbage or empty)

    // default constructor -> initializes all attributes to a default value; typically 0

    // constructor -> special member function
    // 1. no return type
    // 2. same name as the class


    // p._name = "pikachu"; // cannot access directly because it is in private
    p.setName("pikachu");
    cout << p.getName() << endl; // 


    Pokemon c;
    cout << c.getAttack() << endl; // ?


    return 0;
}