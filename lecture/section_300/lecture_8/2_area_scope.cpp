// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 8: user-defined functions

#include<iostream> 
using namespace std; 

// area = PI * r * r

// create your function above main // defining it

// return type(data type) functionName(function/formal parameters) -> function declaration
// {
//     function implementation
// }

// outputs functionName(inputs)

double value = 200; // GLOBAL VARIABLE/SCOPE -> DANGEROUS
// can be accessed anywhere/inside any function within this program

// write our own function to compute area of circle
/**
 * @brief computing the area of the circle
 * 
 * @param radius (double) of circle
 * @return double -> area of the circle
 * optional pseudocode
 */
double areaOfCircle(double radius)
{
    const double PI = 3.14;
    double area = PI * radius * radius;
    return area;
    // area, radius and PI can only be accessed inside this function

}

// scope -> area within which you can access something (variable)

int main()
{
    // radius = 10;// radius can only be accessed inside areaOfCircle()
    double r = 0;
    // r has local scope within main; cannot be access outside main()

    // test case 1
    cout << "Area: " << areaOfCircle(8) << endl; // DONT DO THIS
    // you cannot call a void function inside cout

    // test case 2
    double answer = areaOfCircle(10); // ideal way to call a function that is returning something; store the return value inside a variable

    cout << "Area: " << answer << endl; 

    return 0;
}
