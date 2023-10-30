// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 4: integer division

#include<iostream>

using namespace std;

int main()
{
    // Dividing two variables of type int: 
    int a = 200;
    int b = 17;

    cout << "Dividing two integer variables: " << a / b << endl; 

    // Dividing two variables of type double: 
    double x = 200;
    double y = 17;

    cout << "Dividing two double variables: " << x / y << endl;

    // Dividing two variables of different types: 

    cout << "Dividing two variables of different types:" <<  a / y <<  endl; // 200 / 17


    cout << "Dividing two variables of different types:" <<  x / b << endl;

    // int a,b;
    double c;

    a = 23;
    b = 3;
    c = (double)(a/b);                  
    cout << "23/3 = " << a/b << endl;                  
    cout << "23.0/3 = " << (double)a/b << endl;       
    cout << "23/3.0 = " << a / (double)b << endl;           
    cout << "23/3 = " << (double) (a/b) << endl;            
    cout << "c = " << c << endl;                            
    cout << "c/2 = " << c/2 << endl;                        
    cout << "(a/b) / 2 = " << (double)(a/b) / 2 << endl;     
    cout << "(a/b) / 2 = " << (double)((a/b) / 2) << endl;   
    cout << "a/b/2 = " << a/b/2 << endl;                
    cout << "(5/6/2.0/4) = " << 5/6/2.0/4 << endl;        
    return 0;
}