#include <iostream>

using namespace std;

void display(int array[], int size) {
    cout << "Your list: ";
    for (int i=0; i<size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int insertAtEnd(int element, int array[], int size) {
    array[size] = element;
    return size+1;
}

int insertAtPosition(int element, int array[], int position, int size) {
    for (int i=size-1; i>=position; i--) {
        array[i+1] = array[i];
    }
    array[position] = element;
    return size+1;
}

int deleteNumber(int array[], int size, int number) {
    int position = -1;
    for (int i=0; i<size; i++) {
        if (array[i] == number) {
            position = i;
        }
    }
    for (int i=position; i<size-1; i++) {
        array[i] = array[i+1];
    }
    return size-1;
}

int main() {
    const int MAX_SIZE = 15;

    int array[MAX_SIZE] = {1, 3, 5, 7, 9, 11};
    int current_size = 6;

    display(array, current_size);

    // now, let's add an element to the end of the array
    int element = 13;
    current_size = insertAtEnd(element, array, current_size);

    display(array, current_size);

    // now, let's try to insert an element at the middle somewhere
    int position = 1;
    element = 1;

    current_size = insertAtPosition(element, array, position, current_size);
    display(array, current_size);

    position = 2;
    element = 2;

    current_size = insertAtPosition(element, array, position, current_size);
    display(array, current_size);

    current_size = deleteNumber(array, current_size, 7);
    display(array, current_size);

    current_size = deleteNumber(array, current_size, 9);
    display(array, current_size);

    current_size = deleteNumber(array, current_size, 11);
    display(array, current_size);

    position = 5;
    element = 8;

    current_size = insertAtPosition(element, array, position, current_size);
    display(array, current_size);

    return 0;
}