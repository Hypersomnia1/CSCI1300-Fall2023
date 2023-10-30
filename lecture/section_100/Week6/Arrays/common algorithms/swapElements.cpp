/*
Arrays - Algorithm 4
This program is used to illustrate how you can swap 2 elements of an array

Things to ask yourself
- I need an array, and the two positions of the array to swap

How to approach this problem
- I need a temporary varaible to be able to swap
*/

#include <iostream>

using namespace std;

void swapElement(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    // a is 10 and b is 5
    // but after this function finishes, the changes to a and b are lost
}


void swapArrayElements(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;

    // The array has been changed, but these changes are also visible outside this function
    // The main function, can also see these changes now
}

int main() {

    // Let's look at how to integers can be swapped

    int a = 5, b = 10;

    cout << "Before swapping..." << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << endl;

    // Let's swap the value of a and b
    swapElement(a, b);

    cout << "After swapping..." << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    cout << endl << endl;

    // Observe that integers are not swapped, which means the a and the b were passed by value
    // Any changes to a and b inside the swapElement function was lost

    // ---------------------------------------------------------------------------------------------

    // Int array
    int array[5] = {1,2,3,5,4};

    // we wish to swap element at index 3 with element at index 4
    // So we wish to see a = {1, 2, 3, 4, 5} after the two elements are swapped

    // Define the two index elements that are to be swapped
    int i = 3, j = 4;

    cout << "Before swapping..." << endl;
    cout << "Array is: ";
    for (int i=0; i<5; i++) {
        cout << array[i] << " ";
    }
    cout << endl << endl;

    // Call the function, and pass the array to it
    // Note that we don't put int, or even the [] to pass the array, but rather just it's name!
    swapArrayElements(array, i, j);

    cout << "After swapping..." << endl;
    cout << "Array is: ";
    for (int i=0; i<5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // You observe that the array has changed! So we call that the array has been passed as reference to the swap function
    // Whatever changes were done to the array, inside that swap function was also visible outside the function

    return 0;
}
