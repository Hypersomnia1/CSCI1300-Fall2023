#### **CSCI 1300 CS1: Starting Computing**
#### **Hoenigman/Naidu/Park/Ramesh - Fall 2023**
#### **Recitation 6 - week of October 9th, 2023**

# Table of contents
- [Topics <a name="topics"></a>](#topics-)
- [Exercises <a name="exercises"></a>](#exercises-)
    - [0. Warmup <a name="warmup"></a>](#0-warmup-)
    - [1. Reverse an array! <a name="reverse"></a>](#1-Reverse-an-array!)
    - [2. Spot the errors <a name="spot"></a>](#2-spot-the-errors-)
    - [3. Raccoon Pied Piper <a name="raccoon"></a>](#3-Raccoon-Pied-Piper-)
    - [4. Combinations <a name="combinations"></a>](#4-combinations-)
- [Deliverables for Recitation <a name="deliverables"></a>](#deliverables-for-recitation-)

# Topics <a name="topics"></a>
This recitation covers `nested loops` and basic `arrays`. Let us dive in!

# Exercises <a name="exercises"></a>

### 0. Warmup <a name="warmup"></a>

a. 
The program creates a pattern of asterisks(stars) in the shape of a right angled triangle. The 1st row has one star, the 2nd has two and so on.

Example output (**bold** is user input)
<pre><code>Enter the number of rows: <b>3</b>
* 
* *
* * *
</code></pre>

```cpp
#include <iostream>
using namespace std;

int main()
{
    int num_rows;
    cout << "Enter the number of rows: ";
    cin >> num_rows;

    for (int i = 1; i <= num_rows; i++)
    {
        // Fill in the blank below to get the correct number of stars in the ith row.
        ______________________________
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

```

b.
The program prints the contents of an integer array

```cpp
#include <iostream>
using namespace std;

int main()
{
    // Fill the blank below to create an integer array of size 5 and initialize it with the numbers 3, 4, 5, 6, 7
    ______________________________________

    cout << "The contents of the array are: ";
    for(int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0; 
}
```

c.
The program adds the value 2 to all the elements in a given array. 
```cpp
#include <iostream>
using namespace std;

// Fill the line below with the appropriate function header
______________________________________________________
{
    for(int i = 0; i < numbers_length; i++)
    {
        numbers[i] = numbers[i] + 2;
    }

    return;
}

int main() 
{
    int numbers[5] = {10, 11, 12, 13, 14};

    addTwo(numbers, 5);

    cout << "The updated array is: ";
    for(int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
```

-----------------------------


### 1. Reverse an array! <a name="reverse"></a>

This programs aims reverse the contents of an array with the help of the two functions below.

a) *Function Specifications - ```swap()```*:
  * **Name**: ```swap()```
  * **Parameters (in this order)**:
    * ```char``` letters[]: This is the array whose elements you have to swap.
    * ```int``` first_element: This is the index of the first element among the two elements you should swap.
    * ```int``` last_element: This is the index of the second element in the two elements you should swap.
  * **Return Type**: ```void```
    * This function will swap the values present at the first_element and last_element in the array `letters`.

b) *Function Specifications - ```reverseArray()```*:
  * **Name**: ```reverseArray()```
  * **Parameters (in this order)**:
    * ```char``` letters[]: This is the array whose elements you have to swap.
    * ```int``` letters_length: This is the length of the array `letters`.
  * **Return Type**: ```void```
    * This function should iterate through pairs of indices that have to be swapped to reverse the array and make use of the ```swap()``` function to do the swapping. It should not return anything as arrays are passed by reference and the values will get changed in place.

c) In the `main` function, prompt the user to enter <b>ten</b> characters. Create an array from the given input and reverse it using the '''reverseArray()''' function. Print the reversed array.

**RULE**: Do **NOT** use a temporary array. However, you can create just a temporary variable (The reversing operation should be done “in-place”).

Example output (**bold** is user input)
<pre><code>Please enter ten characters for the array:
<b>a b c d e f g h i j</b>
The reversed array is:
j i h g f e d c b a
</code></pre>

**1a.** Write an algorithm in pseudocode for the program above. 

-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**1b.** Imagine how a sample run of your program would look like. Think about at least two examples.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>


**1c.** Identify the values that you must test for. We call these values “boundary conditions”.

-----------------------------
**Answer:**
<br/><br/>
<br/><br/>

**1d.** Implement your solution in C++ using VS Code. Make sure to add at least 3 assert statements for reverseArray(). Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test boundary conditions and the values from the sample runs.

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

### 2. Spot the errors <a name="spot"></a>

a.
Given two positive integers `x` and `y`, this programs prints all the integer points (i, j) in the rectangle formed by (0, 0) and (x, y).
```cpp
#include <iostream>
using namespace std;

int main() 
{
    int x = 3, y = 4;

    for(int i = 0; i <= x; i++)
    {
        for(int j = 0; j <= y; i++)
        {
            cout << "(" << i << ", " << j << ")  ";
        }
        cout << endl;
    }

}
```

b.
The program prints the contents of an array and then calculates the sum of all the elements.
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    cout << "The contents of the array are: ";
    for (int i = 0; i <= 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    for (int i = 0; i <= 5 i++)
    {
        sum += numbers[i];
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
```

c.
The program tries to flip the sign of all the numbers in an array.
```cpp
#include <iostream>
#include <string>
using namespace std;

void flipSign(int numbers[])
{
    for (int i = 0; i < 10; i++)
    {
        numbers[i] = -1 * numbers[i];
    }
    return;
}

int main()
{
    int length = 4;
    int numbers[] = {1, 2, 3, 4};

    cout << "The contents of the array before changing: ";
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    flipSign(numbers);

    cout << "The contents of the array after changing: ";
    for (int i = 0; i < length; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
```

Work through the spot the error questions interactively via [Coderunner](https://canvas.colorado.edu/courses/95610/assignments/1799632).

-----------------------------

### 3. Raccoon Pied Piper <a name="raccoon"></a>

You are a charming pipe player who visits the Rocky Mountain national park once every year. The entry fee for the person booking the tickets is 50 dollars. There is a 5 dollar additional discount on that fee for every subsequent year. So, for the 2nd year it will cost you 45, 3rd year costs 40 dollars and so on. But there is catch to this story.

Every year you camp in the park, you play your music and a new raccoon comes to listen to you. It is then so impressed by your skills and just joins your family. So, you are adopting a new raccoon every year. Your first park visit would be you alone but the 2nd year, it is you and 1 raccoon. The third year, it is you and 2 raccoons and so on.

Every additional person (or raccoon) in your car is progressively charged lesser by 1 dollar. So if you were charged 30 dollars that year and you have 3 raccoons with you, they would be charged 29, 28 and 27 dollars.

You take all the raccoons in your family to the park every year and the minimum fee for a person (or raccoon) is 1 dollar.

Your task, given some number of years, is to print the individual costs for all those years and calculate the total.

Example output (**bold** is user input)
<pre><code>Please enter the number of years:
<b>5</b>
The costs are as follows:
50
45 44
40 39 38
35 34 33 32
30 29 28 27 26
The total cost is 530 dollars
</code></pre>

**3a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**3b.** Imagine how a sample run of your program would look like. Think about at least two examples.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>


**3c**. Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs.

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

### 4. Combinations <a name="combinations"></a>

a) Create two character arrays `first` and `second` in the ```main()```. The length of the `first` and the `second` arrays should be 4 and 3 respectively. Prompt the user to enter 4 characters that go into the `first` array. Do the same with 3 characters for the `second` array.

b) *Function Specifications - ```combinations()```*:
  * **Name**: ```combinations()```
  * **Parameters (in this order)**:
    * ```char``` first[]: This is the first user-inputted array.
    * ```int``` first_length: This is the length of the array `first`.
    * ```char``` second[]: This is the second user-inputted array.
    * ```int``` second_length: This is the length of the array `second`.

  * **Return Type**: ```void```
    * This function should print all the possible combinations of the elements in `first` with the elements in `second`.

Example output (**bold** is user input)
<pre><code>Please enter 4 characters for the first array:
<b>A B C D</b>
Please enter 3 characters for the second array:
<b>E F G</b>
AE AF AG 
BE BF BG
CE CF CG
DE DF DG
</code></pre>

**4a.** Write an algorithm in pseudocode for the program above. 

-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**4b.** Imagine how a sample run of your program would look like. Think about at least two examples.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>

**4c.** Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs.

<br>

-----------------------------

# Deliverables for Recitation <a name="deliverables"></a>
Complete the Recitation 6 assignment on [Canvas](https://canvas.colorado.edu/courses/95610/assignments/1818641).
