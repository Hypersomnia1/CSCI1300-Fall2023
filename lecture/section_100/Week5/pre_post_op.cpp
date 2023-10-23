#include <iostream>

using namespace std;

int main() {

    // ------------------- PRE and POST Increment --------------------------
    int x = 10;
    int y = 10;

    // Pre-increment (++x) adds 1 to x and then uses the updated value.
    // so after this x becomes 11 and then its 11 gets assigned to the variable
    int result_pre_increment = ++x;

    // Post-increment (y++) uses the current value of y and then adds 1 to it.
    // so y is assigned to the variable and then y gets updated by 1.
    int result_post_increment = y++;

    cout << "Pre-increment result: " << result_pre_increment << endl; // is it 11?
    cout << "Post-increment result: " << result_post_increment << endl; // is it 10?

    // ------------------- PRE and POST Decrement --------------------------
    int a = 5;
    int b = 5;

    // Pre-decrement (--a) subtracts 1 from a and then uses the updated value.
    // So, a becomes 4 before it is used in the expression.
    int result_pre_decrement = --a;

    // Post-decrement (b--) uses the current value of b and then subtracts 1 from it.
    // So, b is used as 5 in the expression, and it becomes 4 afterward.
    int result_post_decrement = b--;

    cout << "Pre-decrement result: " << result_pre_decrement << endl;
    cout << "Post-decrement result: " << result_post_decrement << endl;

    return 0;
}
