// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 6: formatted output

#include<iostream> //fixed
#include<iomanip>  // i/p o/p manipulators; setprecision()

using namespace std;

int main()
{
    int a = 23;
    int b = 3;

    double c = (double)(a/b);

    cout << fixed << setprecision(10);
    cout << "23.0/3 = " << (double)a/b << endl;

    cout << fixed << setprecision(2);
    cout << "c = " << c << endl;   
}