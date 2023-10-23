// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 21: Writing to a file in overwrite mode

#include<iostream>
#include<fstream> // file streams

using namespace std;

int main()
{
    // 1. create filestream variable/objects
    // ifstream means input file stream - used for reading from files
    // fin, file_in, in_file
    ifstream file_in; // can only read from a file

    // ofstream means output file stream - used for writing to files
    // fout, file_out, out_file
    ofstream file_out; // can only write to a file

    int var = 0; // variable to store data from file
    int total = 0; // variable to compute sum of data in file

    // common error: fstream file_in;

    // 2. Associate the file stream object with the file
    //    by using .open(), with the file name (as a string) in parentheses
    file_in.open("data1.txt");
    file_out.open("output.txt"); // creates a file if it doesn't exist
    // by default, it overwrites the existing data

    // 3. check if file opened successfully
    // fail() - returns true if we cannot open the file and false otherwise
    // is_open() - returns true if we can open the file and false otherwise

    if(file_in.fail())
    {
        cout << "Invalid file name" << endl;
        return 1; // 1 because something went wrong
    }
    
    // 4. read from the file and compute total

    // file_in >> var returns a boolean
    // true if successfully read from the file and false otherwise
    while(file_in >> var) // loop as long as there is data in the file and store it in the variable var
    {
        total += var; // add the value of next data point to total
    }
   
    // cout << "Total: " <<  total << endl; // prints to terminal/console
    file_out << "Total: " <<  total << endl; // writes this info into the file associated to file_out (output.txt)

    // 5. close the files 
    file_in.close();
    file_out.close();

    return 0;
}