#include <iostream>

using namespace std;

int main() {
    string penny_says = "Absolutely";

    // adding 'ub' before each vowel

    string ubbi_dubbi_sentence = "ub" + penny_says.substr(0, 3) + "ub" + penny_says.substr(3, 2) + "ub" + penny_says.substr(5, 2)
                    + "ub" + penny_says.substr(7, 4);

    cout << ubbi_dubbi_sentence << endl;

    string sheldon = "Sheldon";

    cout << sheldon.substr(0, 2) + "ub" + sheldon.substr(2, 3) + "ub" + sheldon.substr(5, 2) << endl;

    return 0;
}