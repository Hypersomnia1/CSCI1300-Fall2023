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
    // create the two vectors below to store the list of movie names and their ratings
    vector<string> movie_names;
    vector<float> movie_ratings;

    // this is reading every line of the file
    // remember the getline function is in the while loop condition, to tell "run the while loop as long as there is something to read"
    while (getline(is, line)) {
        // create a stringstream variable and associate to a string variable
        stringstream ss(line);

        // this is to tokenize each line into 4 parts - because we know they have 4 parts
        string token;
        for (int i=0; i<4; i++) {
            getline(ss, token, ',');
            // if I'm looking at the first part - it's the movie name
            if (i == 0) {
                movie_names.push_back(token);
            }
            // if I'm looking at the third part - it's the movie ratings
            if (i == 2) {
                // use stof to convert a variable of type string to a float
                movie_ratings.push_back(stof(token));
            }
        }
    }

    // Print out movie names
    for (int i=0; i<movie_names.size(); i++) {
        // the movie_names.at(i) function is very similar to movie_names[i]
        cout << movie_names.at(i) << endl;
    }

    is.close();
    return 0;
}