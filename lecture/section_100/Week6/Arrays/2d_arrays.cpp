#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    // Define the number of rows and columns for the 2D array
    // since these are the size of the array dimensions, they need to be a constant int variable
    const int COUNTRIES = 5;
    const int MEDALS = 3;

    // Store the list of countries in an array of strings
    string countries[] =
    {
        "US",
        "China",
        "ROC",
        "Great Britian",
        "Japan"
    };
    
    // Define the 2D medal count array - Note that we are declaring it and initalizing it with values
    // When you initialize it, ensure that the number of rows and columns match it's declaration
    // Data type, the name of the variable, the 1st dim and the 2nd dim
    int medal_counts[COUNTRIES][MEDALS] = {
        {1,5,7},
        {4,5,7},
        {6,7,9},
        {1,0,4},
        {4,5,6}    
    };
    

    // Let's print them in tabular format

    // Note the use of setw() function from iomanip
    // It's only used to print the cout statements by giving more spaces in words, so it looks neater

    // print the headers
    cout << setw(16) << "Country" << setw(8) << "Gold" << setw(8) << "Silver" << setw(8) << "Bronze" << setw(8) << "Total" << endl;
    // To print the 2D array, you are going to use a nested for loop
    int total = 0;
    for (int i=0; i<COUNTRIES; i++) {
        // print the country
        cout << setw(16) << countries[i];
        for (int j=0; j<MEDALS; j++) {
            cout << setw(8) << medal_counts[i][j];
            total = medal_counts[i][0] + medal_counts[i][1] + medal_counts[i][2];
        }
        // print the total medal tally for each country
        cout << setw(8) << total;
        cout << endl;
    }

    return 0;
}
