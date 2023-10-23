/*
C++ Program to illustrate the concept of functions - Part 2
*/

#include <iostream>

using namespace std;

int main() {
    // Let's define the logic for printing area of a square
    // Think about what we need as variables.... - perhaps one variable that stores length of the side?

    float side_length = 2;

    // Calculate area of the square as Area = side_length x side_length
    float area = side_length * side_length;

    // Print the area
    cout << "Area of square of length " << side_length << " = " << area << endl;

    // Maybe the length has to change... so let's update it.
    side_length = 3;

    // What's the area now?
    area = side_length * side_length;

    // Print the area
    cout << "Area of square of length " << side_length << " = " << area << endl;

    // Maybe the length has to change again
    side_length = 3.5;

    // What's the area now?
    area = side_length * side_length;

    // Print the area
    cout << "Area of square of length " << side_length << " = " << area << endl;

    return 0;
}