// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 4: typecasting

#include <iostream>
// #include <time.h> // c library
// #include <ctime>

using namespace std;


int main()
{
    // Error #4: the initial value MUST MATCH the declared type. All the time?
    // Answer: 
    int num10 = 105.7;

    // A warning displayed in the console and c++ implicity converts 105.7 to 105


    // Typecasting: int to double, double to int, int to char, char to int
    // implicit vs. explicit

    double var100 = 197.45637;
    // computation
    int sum = static_cast <int> (var100); // c++ style

    // static_cast <data_type> (variable_name) or (data_type)variable_name

    int sum2 = (int) var100; // c style
    double product = (double) sum2;


    // explicitly casting a decimal value to an integer
    

    return 0;
}
