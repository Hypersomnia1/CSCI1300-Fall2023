// Header Files section
#include <iostream>

using namespace std;

// Global Variables section
// These variables are available for all functions to use - So it's scope (where it can be refered) is global
const float PI_VALUE = 3.14; // Notice how constant variable names are capitalized
string global_string = "I am a global string";
int total_score; // A global integer variable


// Function Prototypes section
// With the below lines of code, you're just telling the compiler the existence of the functions before it's used
float calculateArea(float radius);

void displayAmount(int balance);

char computeGrade(int score);

int main() {
    string local_string = "I am a local string";
    int local_integer = 5;
    return 0;
}