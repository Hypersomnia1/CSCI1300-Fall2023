/*
C++ Program to illustrate the concept of functions - Part 3
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Simple Interest Calculator!" << endl;

    // Declare the necessary pieces of information
    float principal;
    float rate;
    int time;
    float interest; // This will be calculated by the program

    // Initialize the variables to whatever you need
    principal = 100.0;
    rate = 0.12;
    time = 4;

    // Calculate the interest as interest = principal x rate x time
    interest = principal * rate * time;
    cout << "Interest generated for " << principal << " dollars at the rate " << rate << " for " << time << " years = " << interest << endl;

    // Now as before, perhaps the program updates the variables
    principal = 300.0;
    rate = 0.15;
    time = 3;

    // Calculate the interest as interest = principal x rate x time
    interest = principal * rate * time;
    cout << "Interest generated for " << principal << " dollars at the rate " << rate << " for " << time << " years = " << interest << endl;

    // Well again, perhaps the program updates the variables
    principal = 560.0;
    rate = 0.10;
    time = 5;

    // Calculate the interest as interest = principal x rate x time
    interest = principal * rate * time;
    cout << "Interest generated for " << principal << " dollars at the rate " << rate << " for " << time << " years = " << interest << endl;

    return 0;
}