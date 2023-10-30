#include <iostream>

using namespace std;

int main() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    char grade;

    if (score > 90)
    {
        // Say the grade is an A
        grade = 'A';
    }
    else if (score > 80) 
    {
        // Say the grade is a B
        grade = 'B';
    }
    else if (score > 70)
    {
        // Say the grade is a C
        grade = 'C';
    }
    else 
    {
        // Say the grade is an F
        grade = 'F';
    }

    cout << "Your score = " << score << endl;
    cout << "Your grade = " << grade << endl;

    return 0;
}