#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;



int main() {
    ifstream is;

    is.open("reviews_2.txt");

    if (is.fail()) {
        return 1;
    }

    string line;


    // this is reading every line of the file
    // remember the getline function is in the while loop condition, to tell "run the while loop as long as there is something to read"
    int movie_idx = 0;
    while (getline(is, line)) {
        // create a stringstream variable and associate to a string variable
        stringstream ss(line);

        // this is to tokenize each line into 4 parts - because we know they have 4 parts
        string token;
        for (int i=0; i<4; i++) {
            getline(ss, token, ',');
            // if I'm looking at the first part - it's the movie name
            if (i == 0) {
            }
            else if (i == 1) {
            }
            // if I'm looking at the third part - it's the movie ratings
            else if (i == 2) {
                // use stof to convert a variable of type string to a float
            }
            else if (i == 3) {
            }
        }

    }

    // print the movies here
    
    is.close();
    return 0;
}