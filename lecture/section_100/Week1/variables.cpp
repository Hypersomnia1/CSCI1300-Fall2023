/*
Variable Names - the right and the wrong.
*/
#include <iostream>

using namespace std;

int main() {
    // Correct methods
    int celsius = 10;
    int celsius_value = 25;  // This is called snake casing when words are separated by underscores (_)
    int celsiusValue = 25;   // This is called camel casing when words are capiatalized starting from second word

    // Incorrect methods
    // int 2celsius;  -> Cannot start with a number
    // int celsius value = 25;   -> Cannot contain a space
    // Int celsius = 25;   -> Int is not recognized because C++ is case sensitive
    // int celsius-value = 25;   -> Cannot contain a special character (-)
    // int celsius#value = 25;   -> Cannot contain a special character (#)
    // int using;   -> Cannot use a reserved word to declare a variable

    // Lets look at some of the basic data types in C++

    // Use int to define an integer valued variable
    int age = 25;
    cout << "Age = " << age << endl;

    // Use float to define a decimal valued variable
    float body_temperature = 98.6;
    cout << "Human body temperature = " << body_temperature << endl;
    double pi = 3.14;
    cout << "Value of pi = " << pi << endl;

    // Use char to define a single alphanumeric character (like a letter, number or anyother character)
    char grade = 'A';
    cout << "Grade = " << grade << endl;
    char pound_sign = '#';
    cout << "Pound sign = " << pound_sign << endl;

    // Use bool to define a True/False Yes/No 1/0 variable (this is like a switch)
    bool isRaining = false;
    cout << "Raining = " << isRaining << endl;
}