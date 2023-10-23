// Let's suppose your program needs to figure out the highest and the lowest values of a stock price
// The stock prices for the past 10 days could like this
// 	32    54    67.5   29    35    80   115   44.5   100   65


// We've seen a program like this, where inputs were taken in from the user
// But let's suppose, we define these values in our program

#include <iostream>

using namespace std;

int main() {
    // 1. You now know we can use an array to store a sequence or list of values of the same data type
    // What data type could you use to store a sequence of stock prices?

    double stock_prices[10] = {32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65};

    // 2. Now that we have an array declared, let's initialize the values, with the data we have

    // you could have used a for loop to initialize too, but since on step 1 above we initialized it, this step is skipped

    // 3. Let's check the values in this array - by printing out each element

    cout << "Prices of the stock" << endl;
    for (int i=0; i<10; i++) {
        cout << stock_prices[i] << " ";
    }
    cout << endl;

    // 4. How do we decide, which is the highest and the lowest value?
    double max_seen = -10000.0; // think why this value is set to a very small negative number
    for (int i=0; i<10; i++) {
        // if my current element is greater than the max seen so far, only then i update it
        if (stock_prices[i] > max_seen) {
            max_seen = stock_prices[i];
        }
    }
    cout << "Maximum seen in the stock array: " << max_seen << endl;

    return 0;
}