// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 17: copying elements in arrays

#include<iostream>

using namespace std;

int main()
{
    int x = 10;
    int y;
    y = x;
    int arr1[3] = {1, 2, 3};
    int arr2[3];

    cout << arr1[0] << endl; // print 1st element in the array

    // arr2 = arr1; // cannot copy an entire array with the assignment operator

    // arr2[0] = arr1[0];
    cout << "Before copy" << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << arr2[i];
    }

    for(int i = 0; i < 3; i++)
    {
        arr2[i] = arr1[i];
    }

    cout << "After copy" << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << arr2[i];
    }

    return 0;
}