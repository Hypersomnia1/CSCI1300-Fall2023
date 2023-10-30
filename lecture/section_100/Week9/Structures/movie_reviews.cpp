/*
This program reads a file that consists of list of movies into a vector of structures
Concepts used: structs, vectors, stringstream, filestreams, getline and loops
*/

#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

// A new structure declaration
// observe the Movie structure has grouped 4 similar attributes of a movie together
// these are the same 4 attributes you see in the movie_reviews.txt file
struct Movie {
    string name;
    int year;
    float rating;
    int num_votes;
};

void printMovies(vector<Movie> movies) {
    // just print the movie name and rating
    for (int i=0; i<movies.size(); i++) {
        cout << movies.at(i).name << "-" << movies.at(i).rating << endl;
    }
}

int main() {
    // 1. Create an input stream to read from the file
    ifstream is;

    // 2. Open the stream and associate it to the file
    is.open("movie_reviews.txt");

    // 3. check if the file was opened successfully or not
    if (is.fail()) {
        // A return of 1 indicates something went wrong in our program - it's just a convention within programming
        return 1;
    }

    // create a line string variable that will be read from the file
    string line;

    // create a vector of movies object
    // similar to how you create vector of ints, or strings, you can also create a vector of struct data type
    vector<Movie> movies; // size is 0 initially

    // 4. this is reading every line of the file
    // remember the getline function is in the while loop condition, to tell "run the while loop as long as there is something to read"
    while (getline(is, line)) {
        // create a stringstream variable and associate to a string variable
        stringstream ss(line);

        // create a Movie variable to hold values read on each line of the file
        Movie movie; // Movie is the data type and movie is the variable

        // this is to tokenize each line into 4 parts - because we know they have 4 parts
        string token;
        for (int i=0; i<4; i++) {
            getline(ss, token, ',');
            // if I'm looking at the first part - it's the movie name
            if (i == 0) {
                movie.name = token;
            }

            // if i is 1, then it's the second column of the line
            else if (i == 1) {
                // stoi converts a string to it's integer value
                // if a string has "23", then stoi will convert it to 23.
                movie.year = stoi(token);
            }

            // if I'm looking at the third part - it's the movie ratings
            else if (i == 2) {
                // use stof to convert a variable of type string to a float
                movie.rating = stof(token);
            }

            // the last part of a line is the number of votes
            else if (i == 3) {
                movie.num_votes = stoi(token);
            }
        }

        // now add the movie into the vector of movies
        movies.push_back(movie);

    }

    // print the movies here
    // note that movies is a vector of structs and vectors are always passed by value
    printMovies(movies);
    
    // 5. Close the input stream after you are done reading the file
    is.close();

    return 0;
}