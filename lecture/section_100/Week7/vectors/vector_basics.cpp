#include <iostream>

// import this library to use vectors
#include <vector>

using namespace std;


void displayVector(vector<int> v) {
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    const int size = 10;
    // Different ways to declare a vector
    vector<int> empty_vector;
    
    vector<int> size_10_vector(size);

    vector<double> double_vector(5);

    // Well, you can initialize a vector of any data type you've learnt so far!

    // Let's put in values to a vector using a loop

    // filling up a size 10 vector
    for (int i=0; i<size; i++) {
        size_10_vector[i] = i+1;
    }

    // Let's display the vector using a custom function
    displayVector(size_10_vector);

    // filling up an empty vector
    // remember since it's an empty vector, we cannot access it by index
    // vector provides a function called push_back for this
    for (int i=0; i<10; i++) {
        empty_vector.push_back(i+1);
    }

    // Let's display the vector using a custom function
    displayVector(empty_vector);

    // let's pop an element now
    empty_vector.pop_back();

    displayVector(empty_vector);
}
