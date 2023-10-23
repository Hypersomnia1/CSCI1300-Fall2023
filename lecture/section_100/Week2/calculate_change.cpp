/*
Program to compute change needed
*/

#include <iostream>

using namespace std;

int main() {
    
    // Define the price of each gallon of gas
    float price_per_gallon = 3.0;

    // Take in the gallons needed from the user as input
    float gallons_needed;

    cout << "Enter gallons required : ";
    cin >> gallons_needed;

    // Compute the total price as a product of price and gallons
    float total_price = price_per_gallon * gallons_needed;

    cout << "Price for " << gallons_needed << " gallons of fuel = " << total_price << endl;

    float amount_paid;
    cout << "Enter amount: ";
    cin >> amount_paid;

    // Below we will look into conditionals like if statements.
    if (amount_paid < total_price) {
        cout << "Insufficient amount" << endl;
    }
    else if (amount_paid == total_price) {
        cout << "You will receive no change" << endl;
    }
    else {
        cout << "Change you'll receive = " << amount_paid - total_price << endl;
    }

    return 0;
}