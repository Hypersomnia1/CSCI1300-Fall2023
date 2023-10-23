/*
Program to illustrate concepts of function prototyping, and scope of variables
*/

#include <iostream>

using namespace std;

// This variable (PI) can be accessed anywhere in the program
// Hence its a global variable
const double PI = 3.14;

// Function Prototype
float calculateArea(float);

int main() {
    
    // You can only access this radius within this function
    // Local Variable
    float radius = 10.0;
    
    // Let's call the calculateArea function to compute the area of the circle
    // Notice how the returned value from the funciton is stored in another variable called 'area'
    float area = calculateArea(radius);

    // Print the result obtained
    cout << "Area of the circle of radius " << radius << " = " << area << endl;

    return 0;
}

float calculateArea(float r) {
    // What is r equal to ?
    // r = 10
    
    float a = PI * r * r;
    return a;
}