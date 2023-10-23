#include <iostream>
#include <fstream>

using namespace std;

int main() {

    // create an input stream using the ifstream data type
    ifstream is;
    

    // associate a file to this input stream
    // this is used to create a stream, for us to read data from the file
    is.open("file.txt");

    // always check if open succeeded
    if (is.fail()) {
        cout << "Something is wrong with opening the file" << endl;
        return 1;
    }

    // now start reading from the input stream
    // this stream is created for us to read from the file
    // x will contain what we read from the file, so we are attempting to read integers from the file
    int x;

    int count_of_lines = 0;
    // to read everything from the file
    // the while loop condition 'is >> x' says that keep reading as long as there is something to read
    while (is >> x) {
        count_of_lines ++;
        cout << x << endl;
    }
    cout << "Number of lines: " << count_of_lines << endl;
    cout << "Done reading the contents" << endl;
    is.close();

    // writing something to a file
    ofstream os;
    os.open("output.txt");

    if (os.fail()) {
        cout << "Something is wrong with opening the file" << endl;
        return 1;
    }

    // lets write something
    os << "Number of lines: " << count_of_lines;

    os.close();

    return 0;
}