// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 21: Reading from a file using eof()

#include<iostream>
#include<fstream> // file streams

using namespace std;

int main()
{
    // 1. create a filestream variable/object 
    // ifstream means input file stream - used for reading from files
    // fin, file_in, in_file
    ifstream file_in; // can only read from a file
    int var = 0; // variable to store data from file
    int total = 0; // variable to compute sum of data in file

    // common error: fstream file_in;

    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses
    file_in.open("data1.txt");

    // combine steps 1 and 2 - ifstream file_in1 ("data.txt");


    // 3. check if file opened successfully
    // fail() - returns true if we cannot open the file and false otherwise
    // is_open() - returns true if we can open the file and false otherwise

    if(file_in.fail())
    {
        cout << "Invalid file name" << endl;
        return 1; // 1 because something went wrong
    }
    
    
    // 4. read from the file and print it

    // eof() - returns true if we have reached the end of our file
    while(!file_in.eof()) // loop as long as we haven't reached the end of the file
    {
        file_in >> var; // read one data point and store it in variable var
        total += var; // add the value of next data point to total
    }
   
    cout << "Total: " << total << endl;

    // 5. close the file 
    file_in.close();

    return 0;
}