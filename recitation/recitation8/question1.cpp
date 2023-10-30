#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

int main() 
{
    
    int count = 0;
    //string filename;
    stringstream ss;
    string line, value, day;
    string max_day = "";
    int max_count = 0;



    // getline(cin,filename);
    // // Fill the line below to make an input file stream from the file input.txt.
    ifstream infile("visitors.txt");
    // Fill the line below to make an output file stream to the file output.txt.
    //ofstream outfile(filename);
    string text;  
    while(getline(infile, line))
    {
        ss.clear();
        ss.str(line);
        ss >> day;
        count = 0;
        while(getline(ss,value,',')){
            count++;
        }
        if(max_day == ""||count > max_count){
            max_day = day;
            max_count = count;
        } 
        
    }
    cout << max_day << " : " << max_count << " People" << endl;
    return 0;
}

