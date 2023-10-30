#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

void cat(string input1, string input2){
    ifstream file1(input1);
    ifstream file2(input2);
    string line, f1Str,f2Str, cat, output;
    ofstream outputFile("output.txt");

    if(file1.is_open() && file2.is_open()){
        while(getline(file1, line)){
            f1Str = line;
        }
        while(getline(file2, line)){
            f2Str = line;
        }
        cat = f1Str + f2Str;
        
        outputFile << cat << endl;

        cout << "Files concatenated successfully" << endl;
    }
    else{
        cout << "Could not open file/files." << endl;
    }
}

int main(){

    string in1;
    string in2;
    cout << "Enter the input filenames that you want to concatenate:" << endl;
    cin >> in1;
    cin >> in2;

    cat(in1, in2);

    return 0;
}