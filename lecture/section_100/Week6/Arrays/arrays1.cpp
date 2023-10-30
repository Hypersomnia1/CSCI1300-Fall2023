#include <iostream>

using namespace std;

/*
Arrays
Program to illustrate the usage of arrays in C++
*/


int main() {
    
    // Arrays are used for storing a sequence of values, and only values of the same data type
    // For instance, arrays could be used to store a sequence of integers

    // 1. Array declaration statements

    // define the size of my array, remember the size variable must be a constant
    const int size = 10;

    // this just creates a list (array) of 10 integers to store
    int array1[size]; // you can also do int array1[10]

    // 2. Array declaration and initialization - all in one line
    int array2[size] = {1,2,3,4,5,6,7,8,9,10};

    // to declare an array and initialize it without providing the size
    // if you initialize the array using the curly braces, you can skip the size aspect in the declaration
    // notice how the square brackets [] is empty.
    // the compiler understands that you wish to initialize 5 elements in your array, so the size is optional
    int array3[] = {1,2,3,4,5};

    // 3. Initializing an array using loops
    // For the purpose, let's initialize the array to store the square of numbers
    // which means you need to store 0, 1, 4, 9, 16, and so on.
    int array4[5]; // declares an integer array with 5 elements only

    // initializing values of an array using access to each element
    for (int i=0; i<5; i++) {
        // at each step/iteration of the for loop, you access the elements individually
        array4[i] = i*i;
    }

    // 4. Printing array values
    // NOTE: you wont get the values of the array if you do cout << array4

    // so to print them out, run another for loop with access to each element
    cout << "Printing elements of the array" << endl;
    for (int i=0; i<5; i++) {
        cout << array4[i] << endl;
    }

    // 5. Updating array values
    // you can update the values in the array, just by running a loop and updating each element (as you wish)
    for (int i=0; i<5; i++) {
        // this just incremenets each value in the array
        array4[i] = array4[i] + 1;
    }

    cout << "After update, printing elements of the array" << endl;
    for (int i=0; i<5; i++) {
        cout << array4[i] << endl;
    }

    return 0;
}