#### **CSCI 1300 CS1: Starting Computing**
#### **Hoenigman/Naidu/Park/Ramesh - Fall 2023**
#### **Recitation 3 - Week of September 18th, 2023**

# Table of contents
1. [Exercises](#exercises)
   1. [Question 0 - Warmup](#fill)
   2. [Question 1 - Spot the Errors](#spot)
   3. [Question 2 - Pumpkin Farm Fertilizer](#pumpkin_app)
   4. [Question 3 - Final velocity of the Rocket](#rocket)
   5. [Question 4 - Hogwarts houses](#Hogwarts)
3. [Deliverables](#deliverables)

# Exercises <a name="exercises"></a>
### 0. **Warmup** <a name="fill"></a>

a.
Fill in the blank with the appropriate function declaration (A function declaration consists of a return type, a function name and function parameters). The program below displays a "Hello" or "No Hello" message by calling the sayHello function.
```cpp
#include <iostream>
using namespace std;

// Fill the line below with the appropriate function declaration
___________________________{
    if (flag == true)
    {
        return "Hello";
    } 
    else
    {
        return "No Hello";
    }
}
int main() 
{
    string message = sayHello(true);
    cout << message << endl;
    return 0;
}
```

b.
Fill in the blank to complete the switch-case statement. The program below determines whether a number is even or odd.
```cpp
#include <iostream>
using namespace std;

int main()
{
    int number = 7;
    int remainder = number % 2;
    //Fill in the blank with the appropriate switch statement 
    ____________________________
    {
    case 0:
        cout << "Number is even" << endl;
        break;
    
    case 1:
        cout << "Number is odd" << endl;
        break;
    }
    return 0;
}
```

c.
Fill in the blank to complete the if-else statement. The program below displays whether x and y are positive or not.
```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 20;
    if (x > 0)
    {   
        // Fill in the blank with a condition that verifies y is positive.
        _________________________
        {
            cout << "both x and y are positive" << endl;
        }
        else
        {
            cout << "x is positive but y is not positive" << endl;
        }
    }
    else
    {
        if(y > 0)
        {
            cout << "x is not positive but y is positive" << endl;
        }
        else
        {
            cout << "both x and y are not positive" << endl;
        }
    }
    return 0;
}
```

### 1. **Spot the errors**. <a name="spot"></a>

An error is divided into 2 categories. The first category is called syntax error where your code violates the syntax in C++. The second category is called logic error where your code is behaving differently than intended. For the following examples, identify both syntax and logic errors.

a.
The program below takes a number from the user and prints the day of the week corresponding to that number.
```cpp
#include <iostream>
using namespace std;

int main() 
{
    int day;
    cout << "Enter a number (1-7): ";
    cin >> day;

    switch (day) 
	{
        case 1:
            cout << "Monday" << endl;
        case 2:
            cout << "Tuesday" << endl;
        case 3:
            cout << "Wednesday" << endl;
        case 4:
            cout << "Thursday" << endl;
        case 5:
            cout << "Friday" << endl;
        case 6:
            cout << "Saturday" << endl;
        case 7:
            cout << "Sunday" << endl;
        default:
            cout << "Invalid input" << endl;
    }

    return 0;
}

```

b.
The program below displays a message about the weather.
```cpp
#include <iostream>
using namespace std;

int main()
{				
    int humidity = 44;
    int temperature = 65;
    
    if(humidity > 50)
    {
        if(temperature > 40)
        {
            cout << "The weather is hot and humid." << endl;
        }
        else
        {
            cout << "The weather is cold and humid." << endl;
    }
    else
    {
        if(temperature > 40)
        {
            cout << "The weather is hot and dry." << endl;
        }
        else
        {
            cout << "The weather is cold and dry." << endl;
        }
    }
    
    return 0;
}
```

c.
The function makeName is supposed to take in a first name and a last name and merge them. It has to return that merged name to the main function which prints it.
```cpp
#include <iostream>
#include <string>
using namespace std;

double makeName(string firstname, string lastname)
{
	string merged_name = firstname + " " + lastname;
}

int main()
{
   string full_name = makeName("Albus","Dumbledore");
   cout << full_name << endl;
}
```
    
d. The program below will display the average between two values by calling the function avg. The correct output should be *9.5*.    
```cpp
#include <iostream>
using namespace std;

int main()
{
    double average = avg(12,7);
    cout << average << endl;
    return 0;
}

int avg(int a, int b)
{
    int x = (a+b) / 2.0;
    return 0;
}
```

e. The program below will calculate and display the length of the hypotenuse of a right triangle given the length of two sides. This is done by calling the function calculateHypotenuse.
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int calculateHypotenuse(int side1, int side2)
{
    cout << "Enter side 1: " << endl;
    cin >> side1;
    cout << "Enter side 2: " << endl;
    cin >> side2;

    double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));

    return hypotenuse;
}

int main()
{
    double hypotenuse = calculateHypotenuse(5, 6);
    cout << hypotenuse << endl;
    return 0;
}

```

Work through the spot the error questions interactively via [Coderunner](https://canvas.colorado.edu/courses/95610/assignments/1799623).

-----------------------------
### 2. **Pumpkin Farm Fertilizer**. <a name="pumpkin_app"></a>
It's the month of September, and you're a smart farmer looking forward to making money as people flock to stores to buy pumpkins. To make sure that your crop looks its best, you need to keep the pumpkins well fertilized. Design two functions to track the amount of fertilizer you purchase and use. Both functions should take in an amount for your current stock of fertilizer and an amount to be used or added into the stock, and then return your new fertilizer levels. Here are two function headers to get you started:


```cpp
double fertilize(double stock, double amount)
double restock(double stock, double amount)
```

You cannot fertilize pumpkins with more than what you have in your stock! And you cannot fertilize or restock with a negative amount. If you attempt to do either of these, the initial stock should be returned.
Here’s some example output (no user input):

-------------------------------
**Example 1**:
 ```cpp  
double stock = 100;
double amount = 20.5;
double result = restock(stock, amount);
cout << result << endl;
```

*Output: 120.50*

---------------------------------

**Example 2**:
```cpp

double stock = 51;
double amount = 50;
double result = fertilize(stock, amount);
cout << result << endl;
```
*Output: 1.00*

-----------------------------------

**Example 3**:
```cpp
double stock = 71.4;
double amount = 20;
double result = fertilize(stock, amount);
cout << result << endl;
```
*Output: 51.40*

-------------------------------------

**2a**. Write an algorithm in pseudocode for the program above.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
-----------------------------

**2b**. Imagine what a sample run of your program would look like. Think about at least two examples

*Sample run 1:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

*Sample run 2:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------
*Sample run 3:*

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------


**2c**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.
<br>

-----------------------------
### 3. Final velocity of the Rocket  <a name="rocket"></a>

  Write a C++ program that will calculate the final velocity of a rocket after 10 seconds. The program will ask the user for the initial velocity (m/s) and the fuel type (A, B, C).
  The rate of acceleration will depend on the type of fuel and the initial velocity.
  - If initial velocity is less than 10, then the acceleration rate for each fuel type is as follows
    - Fuel type A -> 10 (m/s) per second
    - Fuel type B -> 20 (m/s) per second
    - Fuel type C -> 40 (m/s) per second
  - If initial velocity is greater than or equal to 10 and less than  or equal to 40, then the acceleration rate for each fuel type is as follows
    - Fuel type A -> 7 (m/s) per second
    - Fuel type B -> 14 (m/s) per second
    - Fuel type C -> 28 (m/s) per second
  - If initial velocity is greater than 40, then the acceleration rate for each fuel type is as follows
    - Fuel type A -> 2 (m/s) per second
    - Fuel type B -> 4 (m/s) per second
    - Fuel type C -> 8 (m/s) per second

Example output 1 (The * next to a line indicates user input)

 ```
    Enter the initial velocity:
  * 70
    Enter the fuel type:
  * C
    The final velocity is 150 m/s.
```

Example output 2 (The * next to a line indicates user input)

 ```
    Enter the initial velocity:
  * 5
    Enter the fuel type:
  * A
    The final velocity is 105 m/s.
```

  **3a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

  **3b**. Let’s draw a flowchart of the solution

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

  **3c**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.


<br>

-----------------------------

### 4. Hogwarts houses: Using switch case to handle user choice. <a name="Hogwarts"></a>
  
  You’re trying to choose among the 4 houses in Hogwarts. The program shows you the following options:
  
    1. Gryffindor
    2. Hufflepuff
    3. Ravenclaw
    4. Slytherin

If you want to be in Gryffindor, you would press 1, for Slytherin, press 4 and so on. The program should then print the corresponding message:

```You selected Gryffindor!```

Example output (The * next to a line indicates user input)

 ```
    The following are your options in Hogwarts:
    1. Gryffindor
    2. Hufflepuff
    3. Ravenclaw
    4. Slytherin
    Please choose a house
  * 1
    You selected Gryffindor!
```

  **4a**. Write an algorithm in pseudocode for the program above. 

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

  **4b**. Let’s draw a flowchart of the solution

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

  **4c**. Implement your solution in C++ using VS  Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.



# Deliverables for Recitation <a name="deliverables"></a>
Submit your work on [Canvas](https://canvas.colorado.edu/courses/95610/assignments/1810740)
