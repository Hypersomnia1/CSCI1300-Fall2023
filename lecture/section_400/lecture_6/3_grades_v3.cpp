// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 6: if else if demo

#include<iostream>
using namespace std;

// program to print your grades for CSCI 1300

// 93 or greater -> A

int main()
{
    double score = 0;

    cout << "Enter the score you earned for 1300: ";
    cin >> score;

    if (score >= 93)
    {
        cout << "Grade: A" << endl;
    }
    else if (score >= 90)
    {
        cout << "Grade: A-" << endl;
    }
    else if (score >= 87)
    {
        cout << "Grade: B+" << endl;
    }
    else if (score >= 83)
    {
        cout << "Grade: B" << endl;
    }
    else if (score >= 80)
    {
        cout << "Grade: B-" << endl;
    }
    else if (score >= 77)
    {
        cout << "Grade: C+" << endl;
    }
    else if (score >= 73)
    {
        cout << "Grade: C" << endl;
    }
    else if (score >= 70)
    {
        cout << "Grade: C-" << endl;
    }
    else if (score >= 67)
    {
        cout << "Grade: D+" << endl;
    }
    else if (score >= 63)
    {
        cout << "Grade: D" << endl;
    }
    else if (score >= 60)
    {
        cout << "Grade: D-" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }
    
    return 0;
}