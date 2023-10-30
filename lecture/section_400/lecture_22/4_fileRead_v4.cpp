// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 22: Reading info from corrupt files - empty lines and spaces

#include<iostream>
#include<fstream> // file streams
#include<iomanip>
#include<cctype>

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
    file_in.open("sales2.txt");

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
    // extract one line of data into a string
    // search for a comma and split stuff into 2 pieces
    string line;
    while(getline(file_in, line)) // !file_in.eof()
    {
        int len = line.length();
        // check if the line has data to read
        if(len > 0 && !isspace(line.at(0)))
        {
            for(int i = 0; i < len; i++)
            {
                // search for the location of , in each line of data
                if(line.at(i) == ',') // line[i]
                {
                    // extract everything until before the comma
                    month = line.substr(0, i);
                    // extract everything after the comma
                    sales = stod(line.substr(i+1)); // extract everything from i+1 until the  end of line
                    // stoi - "135677"
                    // stod - "1234.87"
                    // "4667char"
                }
            }
            cout << left << setw(10) << month << setw(6) << sales << endl;
        }
    }
    
    // 6. close the file 
    file_in.close();

    return 0;
}