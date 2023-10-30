// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 16: arrays

#include<iostream>

using namespace std;

int main()
{
    int x; // declared a var
    x = 1; // initialzie variable

    int y = 10; // declare + initialize
    y = 20;

    // data_type variable_name[size];
    // size should always be positive INT
    // array size cannot be modified once created
    // It is fast

    // declaring an int array of size 5 
    int arr[5]; // -> can store 5 integers

    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    // individual element initialization
    arr[0] = 10; // first element
    arr[1] = -3; 

    // initilaize all elements in the array to 0
    for(int i = 0; i < 5; i++)
    {
        // cout << arr[i] << endl;
        arr[i] = 100;
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    // only works at the time of declration

    int arr1[10] = {}; // initialize all elements to 0

    int arr2[10] = {100, -3, 4};

    for(int i = 0; i < 10; i++)
    {
        cout << arr2[i] << endl;
    }

    double arr3[3];
    bool checks[2] = {true, false};

    string names[2] = {"Jake", "Supriya"};
    cout << names[0] << endl;

    string s = "csci";
    cout << s[0];

    // access it with the square bracket (index)


    /// strings -> array of char


    // segmentation fault -> loops and arrays
    // error -> access something that you are not allowed to
    // out of bounds error
    // run time error
    
    for(int i = 0; i < 100000; i++) // ideally it should tell that your out of bounds
    {
        cout << arr2[i] << endl;
    }

    return 0;
}