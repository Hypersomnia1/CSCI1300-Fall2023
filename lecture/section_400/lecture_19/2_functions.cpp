// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 19: vectors with functions

#include<iostream>
#include<vector>

using namespace std;

int demo(int x, char c)
{
    x = 100;
    // x is passed by value
    // a copy of the value is stored inside x
    // any changes to x will only be avaialble inside demo()
    c = 'x';
    return x;
}


void add10(int arr[], int size) // arrays are passed by reference -> global scope
{
    for(int i = 0; i< size; i++)
    {
        arr[i] += 10;
        // changes to the array are reflected in teh calling function, which is main() in this program
    }
}

// vectors are passed by value
vector<int> add10(vector<int> vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        vec.at(i) += 10;
        // changes made to vec will only be avaialble inside thsi function
        // the vector should be rerurned if the calling function needs access to the updated vector
    }
    return vec;
}

int main()
{
    int x = 10;
    char q ='W';
    x = demo(x, q); 
    cout << x << q << endl; // 10, W

    int arr[5] = {1, 2, 3, 4, 5};
    string arr1[2];
    char arr2[2];

    string name; // pass by value
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl; // 1, 2, 3, 4, 5
    }

    add10(arr, 5); //

    cout << "After function call" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl; // 
    }


    vector<int> vec1 = {1, 2};
    vector<int> vec2;

    for(int i = 0; i< vec1.size(); i++)
    {
        cout << vec1.at(i) << endl;
    }

    vec2 = add10(vec1);
    cout << "After function call" << endl;
    for(int i = 0; i< vec1.size(); i++)
    {
        cout << vec1.at(i) << endl;
    }

    return 0;
}