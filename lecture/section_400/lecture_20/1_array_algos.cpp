// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 20: Common Array algorithms

#include<iostream>
using namespace std;

// for loops and array indexing
// function to find the index of element that it is looking for
int arrSearch(int arr[], int curr_size, const int MAX_SIZE, int element)
{
    // 1. create variable to track status of task
    bool flag = false;
    int position = -1; // if it returns -1 then we haven't found the element
    // 2. check every element in the array
    for(int i = 0; i < curr_size && !flag; i++)
    {
        // 3. check if teh current element is what we are looking for 
        if(arr[i] == element)
        {
            // 4. update position if match is found
            position = i;
            // 5. flip value of flag to break out of the loop
            flag = true;
        }
    }
    return position;
}

// remove an element -> modifying the array and the array size
// return the updated size

int removeElementInArr(int arr[], int curr_size, const int MAX_SIZE, int element)
{
    // 1. find the index of element that should be removed
    int position = arrSearch(arr, curr_size, MAX_SIZE, element);

    // 2. check if position is within the valid range of index values
    if(position >= 0 && position < curr_size)
    {
        // 3. move up elements by 1 position
        for(int i = position; i < curr_size - 1; i++) // position = 3; curr_size = 7
        {
            arr[i] = arr[i + 1];
        }
        // 4. update size to reflect that we have one less element in the array
        curr_size--;
    }
    else
    {
        cout << "Element not found in the array" << endl;
        return curr_size;
    }
    return curr_size;
}

int insertElementInArr(int arr[], int curr_size, const int MAX_SIZE, int element, int position)
{
    // 1. check if the array has space to store an element
    if(curr_size >= MAX_SIZE)
    {
        cout << "Array is at capacity. Cannot insert a new element" << endl;
        return curr_size;
    }
    else
    {
        // 2. move the elements down by 1 position 
        for(int i = curr_size - 1; i >= position; i--)
        {
            arr[i+1] = arr[i];
        }
        // 3. insert element into the specified position
        arr[position] = element;
        // 4. increase size to reflect that we have added a new element
        curr_size++;
    }
    return curr_size;
}

int main()
{
    const int MAX_SIZE = 10;
    int arr[MAX_SIZE] = {12, 2, 9, 13, 26, 10, 31};
    int curr_size = 7;

    int index = arrSearch(arr, curr_size, MAX_SIZE, 100);
    cout << index << endl;

    curr_size = removeElementInArr(arr, curr_size, MAX_SIZE, 13);
    for(int i = 0; i < curr_size; i++)
    {
        cout << arr[i] << endl;
    }

    curr_size = insertElementInArr(arr, curr_size, MAX_SIZE, 13, 101);
    for(int i = 0; i < curr_size; i++)
    {
        cout << arr[i] << endl;
    }


    return 0;
}