/*
Convert user inputted celsius value into farenheit value
*/

#include<iostream>

using namespace std;

int main() {

    // Declare celsius as an integer variable
    int celsius;

    cout << "Enter Celsius value: " ;
    // Take an input from the user on the terminal / command prompt window
    cin >> celsius;
    
    // Display the value the user entered on to the terminal / command prompt window
    cout << "The celsius value you entered is : " <<  celsius << endl;

     // Declare farenheit as a double variable, because farenheit can be a decimal number too!
    double farenheit;

    // Use the formula farenheit = 1.8 x celsius + 32 to convert celsius into farenheit value
    farenheit = (1.8)*celsius + 32;

    // Display the converted farenheit value on to the terminal / command prompt window
    cout << "The converted farenheit value is : " << farenheit << endl;

    return 0;
}