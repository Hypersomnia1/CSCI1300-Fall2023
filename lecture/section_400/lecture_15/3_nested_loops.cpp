// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 15: nested loops

#include<iostream>

using namespace std;

// patterns
// 0 1 2 3 4 
// # * * * * 0 
// * # * * * 1
// * * # * * 2
// * * * # * 3
// * * * * # 4


// nested loops - loop inside another
int main()
{
    // cout << "* * * * *" << endl;
    // outer loop -> i
    for(int i = 0; i < 5; i++) // 5 times -> a row of stars // counting the number of rows
    {
        // inner loop -> j
        for(int j = 0; j < 5; j++) // count the number of columns
        {
            if(i == j)
                cout << "# ";
            else
                cout << "* ";
        }
        cout << endl; // inside your inner loops
    }
    return 0;
}