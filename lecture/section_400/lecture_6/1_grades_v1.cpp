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

    if (score < 60)
    {
        cout << "Grade: F" << endl;
    }
    else if (score >= 60 && score <= 62.99)
    {
        cout << "Grade: D-" << endl;
    }
    else if (score >= 63 && score <= 66.99)
    {
        cout << "Grade: D" << endl;
    }
    else if (score >= 67 && score <= 69.99)
    {
        cout << "Grade: D+" << endl;
    }
    else if (score >= 70 && score <= 72.99)
    {
        cout << "Grade: C-" << endl;
    }
    else if (score >= 73 && score <= 76.99)
    {
        cout << "Grade: C" << endl;
    }
    else if (score >= 77 && score <= 79.99)
    {
        cout << "Grade: C+" << endl;
    }
    else if (score >= 80 && score <= 82.99)
    {
        cout << "Grade: B-" << endl;
    }
    else if (score >= 83 && score <= 86.99)
    {
        cout << "Grade: B" << endl;
    }
    else if (score >= 87 && score <= 89.99)
    {
        cout << "Grade: B+" << endl;
    }
    else if (score >= 90 && score <= 92.99)
    {
        cout << "Grade: A-" << endl;
    }
    else if (score >= 93)
    {
        cout << "Grade: A" << endl;
    }

    return 0;
}