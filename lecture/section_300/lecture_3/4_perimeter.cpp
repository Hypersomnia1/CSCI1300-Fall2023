// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 3: perimeter of a rectangle

#include<iostream>

using namespace std;

int main()
{
    double width = 0, height = 0, perimeter = 0;
    // getting input
    cout << "Enter width of rectangle: ";
    cin >> width;

    cout << "Enter height of rectangle: ";
    cin >> height;

    // calculating perimeter
    perimeter = 2 * (width + height);

    cout << "Perimeter = " << perimeter << endl;

    return 0;
}