// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 21: Reading from a file using >>

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

    // file_in >> var returns a boolean
    // true if successfully read from the file and false otherwise
    while(file_in >> var) // loop as long as there is data in the file and store it in the variable var
    {
        cout << var << endl; // printing out what we just stored in var
    }
   
    // 5. close the file 
    file_in.close();

    return 0;
}