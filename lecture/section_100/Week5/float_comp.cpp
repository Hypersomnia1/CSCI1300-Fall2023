#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a = 1.1;
    float b = 2.2;

    float sum_ab = a + b; // this is equal to 3.3
    
    cout << setprecision(13) << endl;
    cout << "sum = " << sum_ab << endl;
    
    if (sum_ab == 3.3) {
        cout << "Equal" << endl;
    }
    else {
        cout << "Not equal " << endl;
    }

    // How do we solve this issue?
    

    
    return 0;
}
