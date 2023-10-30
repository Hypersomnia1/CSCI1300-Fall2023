/*
This is the driver program which consists of the main function
We call this file as a driver program, as it drives the logic starting from the main function 
*/

/*
Compile this file using "g++ -std=c++17 -Wall -Wpedantic -Werror main.cpp pokemon.cpp"
*/

// Include the header file we wrote, but in double quotes (""), and not in angular brackets (<>)
#include "pokemon.h"

// A function to display pokemons in my list
void displayPokemons(Pokemon pokemons[], int size) {
    for (int i=0; i<size; i++) {
        pokemons[i].display();
    }
}

int main() {

    // Default constructor
    Pokemon p1; // similar to int x;

    // the second parameterized constructor is called
    Pokemon p2("pikachu", 25);

    Pokemon p3("meowth", 50); // second constructor again

    // the third parameterized constructor is called
    Pokemon p4("pichu", 170, "Electric", 45);

    // Create an array of pokemons
    Pokemon pokemons[4];

    // assign the 4 elements of the array, to the 4 objects we had created earlier
    pokemons[0] = p1;
    pokemons[1] = p2;
    pokemons[2] = p3;
    pokemons[3] = p4;

    // a function to display the pokemons
    displayPokemons(pokemons, 4);
    
    return 0;
}