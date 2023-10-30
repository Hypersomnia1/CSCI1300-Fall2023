// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 7: user-defined functions

#include<iostream> 
using namespace std; 

// area = PI * r * r

// create your function above main // defining it

// return type(data type) functionName(function/formal parameters) -> function declaration
// {
//     function implementation
// }

// outputs functionName(inputs)

// write our own function to compute are of circle

double areaOfCircle(double radius)
{
    const double PI = 3.14;
    double area = PI * radius * radius;
    // giving/returns the output
    return area;

}

int main()
{
    
    // double r = 0;

    // cout << "Enter radius: ";
    // cin >> r;

    cout << "Area: " << areaOfCircle(8) << endl;

    return 0;
}
