// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 17: manipulating arrays

#include<iostream>

using namespace std;

// section 6.2 -> average, sum, max, min, insert, remove etc.

// program to convert user input(kg) into pounds

void demo(int x) // x = 3
{
    int y = x * 2; // 6
    x++; // 4
    cout << y;
}


int main()
{
    const int SIZE = 3;
    double kg[SIZE] = {};
    double pounds[SIZE] = {};
    demo(SIZE); // value of SIZE is stored in x - > passing by value
    // user input
    int i =0;
    do
    {
        cout << "Enter number: ";
        cin >> kg[i];
        i++;
    }while(i < SIZE);

    // populate the pounds array
    // 1 kg = 2.205 pounds
    for(int j = 0; j < SIZE; j++)
    {
        pounds[j] = kg[j] * 2.205;
    }
    // print the array
    for(int j = 0; j < SIZE; j++)
    {
        cout << pounds[j] << endl;
    }

    return 0;
}