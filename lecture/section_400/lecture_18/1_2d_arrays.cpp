// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 18: 2D arrays

#include<iostream>
#include<iomanip> // setw()

using namespace std;

// 2d arrays must have column filled in for the parameter
void print2DArray(int arr[][4], int rows, int cols) // adding rows and cols as parameters giives us flexibility in printing/accessing the required number if elements vs the entire array
{
    for(int i = 0; i< rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << setw(7) << arr[i][j];
        }
        // go to a new line after printing each row
        cout << endl;
    }
}


int main()
{
    const int SIZE = 3;
    int arr_row1[SIZE] = {2, 3, 9}; // 1D array
    int arr_row2[SIZE] = {2, 3, 9}; 

    // 2D array - multiple rows and columns
    // data_type arr_name[ROWS][COLUMNS]
    const int ROW = 3;
    const int COL = 4;
    double sales[ROW][COL]; // declared a 2D array

    for(int i = 0; i < ROW; i++) // outer loop is rows
    {
        for(int j = 0; j < COL; j++) // inner loop is columns
        {
            cout << setw(15) <<  sales[i][j];
        }
        // go to a new line after printing each row
        cout << endl;
    }

    // internally a 2D array is made up of multiple 1D arrays
    int arr2[ROW][COL] = {  {2, 3, 5, 6}, // row 0
                            {4, 6, 10, 2}, // row 1
                            {3, 2, 1, 8}}; // row 2

    int arr3[ROW][COL] = { {1, 2, 3, 4},
                            {}, {}};

    int arr4[ROW][COL] = { };

    int arr1[4] = {2, 3, 4, 5};

    print2DArray(arr2, ROW, COL);

    int arr10[] = {2, 4, 5, 20}; // assigns a size of 4

    // int arr11[]; // not allowed to create an array without specifying size and elements

    // arrays are fast

    // vectors -> dynamcally re-sizable but can be slower than arrays in some instances

    int arr20[10][10][10];
    // 3 dimensional array

    return 0;
}