// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 19: intro to vectors

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // char arr1[5] = { 'a', 'e', 'i', 'o', 'u'};
    // cout << arr1[2];

    // vectors -> dynamically re-sizable arrays
    // vector<data_type> vector_name;

    vector<int> vec1; // 0 elements
    vector<int> vec2 = {1, 2, 3, 4, 5}; // 5 elements
    vector<int> vec3(10); // 10 elements

    vector<char> vec4;
    vec4.push_back('s');

    //ADV 1:  you do not need an extra variable to track size

    // size() function to track the size of the vector
    // cout << vec1.size() << endl;
    // cout << vec2.size() << endl;
    // cout << vec3.size() << endl;

    // how to add elements
    // push_back(value) = increases size if needed and adds the value to the vector

    vec1.push_back(6); // adds 6 at position 0 in vec1; also increases size by 1
    vec1.push_back(-10); 
    vec1.push_back(300); 
    vec1.push_back(20); 
    vec1.push_back(3); 
    vec1.push_back(5); 
    vec1.push_back(450); 
     
    for(int i = 0; i < int(vec1.size()); i++)
    {
        cout << vec1.at(i) << endl; 
        // same as vec1[i]
        // better error handling with out of bounds scenarios
    }

    // pop_back() - removes the last element in the vector
    vec1.pop_back(); // no arguments
    vec1.pop_back();
    vec1.pop_back();

    cout << "after pop_back" << endl;
    for(int i = 0; i < int(vec1.size()); i++)
    {
        cout << vec1.at(i) << endl; // vec1[i]
    }

    return 0;
}