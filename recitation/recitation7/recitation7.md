#### **CSCI 1300 CS1: Starting Computing**
#### **Hoenigman/Naidu/Park/Ramesh - Fall 2023**
#### **Recitation 7 - week of October 16th, 2023**

# Table of contents
- [2D Arrays and Vectors](#arrays)
- [Exercises](#exercises-)
    - [0. Warmup](#warmup)
    - [1. Working with vectors](#vectors)
    - [2. Matrix sum](#matrix)
    - [3. Spot the errors](#spot)
    - [4. Student test record](#test)
- [Deliverables for Recitation](#deliverables)

# 2D Arrays and Vectors <a name="arrays"></a>
Last week in the lecture, we learned about 2D arrays and the basics of vectors. A vector is a useful data structure to use when we don’t know how many pieces of information we want to store. Today, let’s solve some problems related to vectors.

# Exercises <a name="exercises"></a>

### 0. Warmup <a name="warmup"></a>

a. The program below displays the left diagonal elements of the 2D matrix

```cpp
#include <iostream>

using namespace std;

int main() 
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int rows = 3;
    int cols = 3;

    cout << "Left Diagonal elements are: ";
    for (int i = 0; i < rows; i++) {
        for (__________________________________________)  // Fill in the blank with for loop  
        {
            if (i == j) 
            {
                cout << matrix[i][j] << " ";
            }
        }
    }

    cout << endl;

    return 0;
}

```

b. The program below prints the string that has length equal to 3.
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> animals = {"apple","cat", "banana",  "dog", "elephant", "fox"};
    int len = animals.size();

    cout << "Strings with size 3:" << endl;
    for (int i = 0; i < len; i++) {
        if (____________________________________)   //Fill in the blank with appropriate condition.
        {
            cout << animals[i] << endl;
        }
    }

    return 0;
}

```

c. The program below adds multiple's of 3 to a vector using function.
```cpp
#include <iostream>
#include <vector>

using namespace std;

// Function to add multiples of 3 to a vector
void addMultiplesOf3(__________________________)  // Fill in the blank with appropriate function parameter
{ 
    for (int i = 1; i <= 5; i++) 
    {
        int multiple = 3 * i;
        vec.push_back(multiple);
    }
}

int main() 
{
    vector<int> myVector= {1, 2, 4, 5};

    // Call the function to add multiples of 3 to the vector
    addMultiplesOf3(myVector);
    int length = myVector.size();
    
    // Print the elements of the vector
    cout << "Updated vector: ";
    for (int i = 0; i <= length; i++) 
    {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}


```

-----------------------------

### 1. Working with vectors  <a name="vectors"></a>
In this problem, you will write a program to

* accept 15 floating point values from the user and store it in a vector
* find the average of all the values in the vector
* remove all elements that are less than the calulated average

Each of these three requirements should be implemented in individual functions. The parameters and return types of these functions are up to you. The full solution should consist of a `main` function which drives the program, using the three functions written for each sub-task and outputting the result at each stage.

**1a**. Write three algorithms in pseudocode for the three tasks above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**1b**. Imagine how a sample run of your program would look like. Think about at least two examples.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 3:**
<br/><br/>
<br/><br/>



**1c**. Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs.

-----------------------------
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

### 2. Matrix sum  <a name="matrix"></a>
The sum of two matrices is found by adding together corresponding entries in each matrix, as shown above. (For example, the numbers at (row 1, column 1) of each matrix are added together to get the (row 1, column 1) number of the sum matrix.)


Write a function that accepts two 2x3 integer arrays as input parameters and displays the sum matrix (displayed in 2 rows).
Example header:
```cpp
void matrixSum(int a[2][3], int b[2][3])
```

Then, create a main() function that asks the user to input the values for each matrix one row at a time. Store these in two arrays, and pass them to matrixSum.
Example output (bold is user input)
```cpp
Enter values for matrix 1, one row at a time:
1 2 3
4 5 6
Enter values for matrix 2, one row at a time:
2 4 6
8 10 12
The sum is:
3 6 9
12 15 18
```


**2a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**2b**. Add three asserts to test the function for various inputs.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>



**2c**. Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs.

-----------------------------
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


-----------------------------

### 3. Spot the errors <a name="spot"></a>


a.
The program below intends to prints average of the scores. Fix the error in the code.
```cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    double scores[5] = {85.4, 90.3, 100, 89, 74.5, 95};
    double sum = 0;
    for(int i = 0; i < 5; i++){
        sum += scores[i];
    }
    double avg = sum / 5.0;
    cout << "Average = " << avg << endl;
    return 0; 
}

```

b. The program below displays transpose of a given matrix. The transpose of a matrix is simply a flipped version of the original matrix by switching its rows with its columns. Fix the error in the code.
```cpp
#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the transpose of a matrix
vector<vector<int>> transposeMatrix(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> transpose(cols, vector<int>(rows));  // Define a 2D vector to store the transpose of a matrix

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    return transpose;
}

int main() {
    vector<vector<int>> originalMatrix = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Calculate the transpose matrix using the function
    vector<vector<int>> result = transposeMatrix(vector<vector<int>> originalMatrix);

    // Display the transpose matrix
    cout << "Transpose Matrix:" << endl;
    for (int i = 0; i < result.size(); i++) 
    {
        for (int j = 1; j < result[0].size(); j++) 
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


```

c. The program below tries to print all the colors specified in the color array. Fix the error in the code.
```cpp
#include <iostream>
using namespace std;

int main()
{
    int N = 5;
    int colors[] = {"red", "blue", "yellow", "green"};

    //printing all the colors
    for (int i = 0; i < N i++){
        cout << "The color list has " << colors[N] << "color" endl
    }
    return 0;
}
```

d. The program below adds the item to the cart only if the item price is less than $20. Fix the error in the code.
```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    vector<string> shopping_cart; 

    while (true) {
        cout << "Enter the name of the item (or 'exit' to finish): ";
        string item_name;
        cin >> item_name;

        if (item_name == "exit") {
            break;
        }

        cout << "Enter the price of the item: ";
        double item_price;
        cin >> item_price;

        if (item_price < 20.0) {
            push_back.shopping_cart(item_name);
            cout << "Added " << item_name << " to the cart." << endl;
        } else {
            cout << "Price exceeds $20. Item not added to the cart." << endl;
        }
    }
    
    cout << "Items in the cart are:"<< endl;
    for(int i=0; i<shopping_cart.size(); i++)
    {
        cout<< shopping_cart[j] << endl;   
    }
    return 0;
}

```

Work through the spot the error questions interactively via [Coderunner](https://canvas.colorado.edu/courses/95610/assignments/1799652?module_item_id=4957390). 

-----------------------------




### 4. Student test record  <a name="test"></a>
You are responsible for managing test scores for 5 students in your class across three subjects: Maths, Economics, and Physics. . Your goal is to calculate the average score for each subject. The students' scores for all subjects should be stored in a 2D matrix, and the averages for each subject should be stored in a vector.


Scores matrix will be [5x3] matrix, where each row corresponds to a student, and the columns represent the subjects

```
| Name     | Maths    | Economics   |  Physics |
| -------- | -------- | ----------- |----------
| Alex     |    67    |    80       |  56      |
| Jason    |    78    |    90       |  43      |
| Ben      |    92    |    44       |  80      |
| Tony     |    89    |    80       |  38      |
| Justin   |    58    |    34       |  82      |
```

The average_scores  will have 3 elements, each representing the average score for one of the subjects.
```cpp
average_scores = [76.8, 65.6, 59.8]

```
Write a program  that takes user input for the scores of these 5 students and calculates the average score for each subject. The input scores should be in the range of 0 to 100, and you should include validation to ensure the input falls within this range. If any input is outside this range, the program should display an appropriate error message.


**4a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**4b**.  Imagine how a sample run of your program would look like. Think about at least two examples.

Sample Run 1:

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

Sample Run 2:

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>



**4c**. Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs.

-----------------------------
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>


-----------------------------

# Deliverables for Recitation <a name="deliverables"></a>
Complete the Recitation 7 assignment on [Canvas](https://canvas.colorado.edu/courses/95610/assignments/1825321).
