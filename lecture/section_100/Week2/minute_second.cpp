#include<iostream>

using namespace std;

int main() {

    int x = 5;
    int y = 3;

    cout << x / y << endl;

    cout << x % y << endl;

    // Convert seconds into minutes and seconds

    int number_of_seconds = 200;

    // 60 seconds -> 1 minute

    // minutes -> number of seconds / 60
    // seconds -> number of seconds % 60

    cout << "Enter number of seconds : ";

    cout << "Number of minutes = " << number_of_seconds / 60 << endl;
    cout << "Number of seconds = " << number_of_seconds % 60 << endl;  

    return 0;
}