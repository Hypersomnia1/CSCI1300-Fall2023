// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 11: testing area of circle 

#include<iostream> 
#include<cassert>
using namespace std; 

/**
 * @brief computing the area of the circle
 * 
 * @param radius (double) of circle
 * @return double -> area of the circle

 */
double areaOfCircle(double radius)
{
    const double PI = 3.14;
    double area = PI * radius * radius;
    return area;
}

int main()
{
    // test case 1
    assert(areaOfCircle(8) == 200.96);
    cout << "function passed for radius 8" << endl;

    // test case 2
    assert(areaOfCircle(10) == 314);
    cout << "function passed for radius 10" << endl;

    // test case 3
    assert(areaOfCircle(0) == 0);
    cout << "function passed for radius 0" << endl;

    // test case 4
    assert(areaOfCircle(-8) == 200.96);
    cout << "function passed for radius -8" << endl;
    // this is not the intended functionality. We need to update our function to ony calculate area for radius >0

    return 0;
}