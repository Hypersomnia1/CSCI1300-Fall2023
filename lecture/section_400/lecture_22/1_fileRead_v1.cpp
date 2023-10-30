// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 22: Reading multiple data pieces from a file

#include<iostream>
#include<fstream> // file streams
#include<iomanip>

using namespace std;

int main()
{
    // 1. create a filestream variable/object 
    // ifstream means input file stream - used for reading from files
    // fin, file_in, in_file
    ifstream file_in; // can only read from a file

    // other variables to process data
    double sales = 0; // variable to store data from file
    string month;

    // common error: fstream file_in;

    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses
    file_in.open("sales1.txt");

    // combine steps 1 and 2 - ifstream file_in1 ("data.txt");


    // 3. check if file opened successfully
    // fail() - returns true if we cannot open the file and false otherwise
    // is_open() - returns true if we can open the file and false otherwise

    if(file_in.fail())
    {
        cout << "File doesn't exist. Terminating the program!" << endl;
        return 1; // 1 because something went wrong
    }
    
    // 4. optional -> depends on the file
    // extract the first line, usually a header describing the data for each column, and do nothing with it
    // we process the header before the while loop because our loop only processes numeric data
    string temp; // a temporary string to store the first line
    getline(file_in, temp);

    // 5. process the data from the file
    // just print it
    while(file_in >> month >> sales) // !file_in.eof()
    {
        cout << left << setw(10) << month << setw(6) << sales << endl;
    }
    
    // 6. close the file 
    file_in.close();

    return 0;
}