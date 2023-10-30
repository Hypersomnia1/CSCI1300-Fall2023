#include <iostream>

using namespace std;

int main() {
    cout << "Stock Value Analysis" << endl;

    // Define the variable that is taken in from the user
    float stock_price;

    // set the minimum and maximum price so you can compare the user entered value with the mins and the maxs
    // minimum is set to a very large number and maximum is set to a very low number
    float minimum_price = 1000000, maximum_price = -100000;

    // while true -> indicates it's a infinite loop
    // perhaps we would write logic somewhere within the loop to break out of it
    // to terminate it from cmd line, press ctrl+c or cmd+c (whichever you have on your keyboard)
    while (true) {
        cout << "Enter stock data: ";
        cin >> stock_price;

        // to handle wrong inputs (like strings)
        // cin.fail() is a member function that will be set to true if some input to cin was invalid
        if (cin.fail()) {
            cout << "Invalid input" << endl;
            // call the clear function to reset the cin
            cin.clear();
            // call the ignore function to ignore 10000 characters (if that many are there) from user
            // '\n' is the delimiter, which means ignore 10000 characters until we see '\n' (new line character)
            cin.ignore(10000, '\n');
            continue;
        }

        // put logic to record what is the highest entered and lowest entered value
        if (stock_price > maximum_price) {
            // this is to check if current value is more than the highest recorded so far
            maximum_price = stock_price;
        }
        if (stock_price < minimum_price) {
            // this is to check if current value is lower than the lowest recorded so far
            minimum_price = stock_price;
        }

        cout << "Minimum: " << minimum_price << " and Maximum: " << maximum_price << endl;
    }

    return 0;
}