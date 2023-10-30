// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 4: relational operators

#include<iostream> 

using namespace std;

int main()
{
    // relational operators -> >, =, <=, >=, !=, <=
    // 3 < 5 -> will give us a true or false

    bool var = 10; // any non-zero value will evaluate to true
    cout << var << endl;

    var = var > 3.20; // expression will evaluate to 0 or false
    cout << var << endl;

    var = 3 < 3 *(8/4);
    cout << var << endl;
    return 0;
}