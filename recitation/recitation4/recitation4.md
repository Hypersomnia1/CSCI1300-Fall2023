#### **CSCI 1300 CS1: Starting Computing**
#### **Hoenigman/Naidu/Park/Ramesh - Fall 2023**
#### **Recitation 4 - Week of September 25th, 2023**

# Table of contents
1. [Exercises](#exercises)
   1. [Question 0 - Warmup](#fill)
   2. [Question 1 - Spot the Errors - Championship Edition](#spot)
   3. [Question 2 - Pi Day](#app)
   4. [Question 3 - Registration form](#reg)
3. [Deliverables](#deliverables)


# Exercises <a name="exercises"></a>
### 0. **Warmup** <a name="fill"></a>
Fill in the blank with the appropriate function definition. The program below displays the square of the number by calling the user-defined square function.
```cpp
#include <iostream>
using namespace std;

// Fill the line below with the appropriate function definition
_________________________
{
    return num * num;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int result = square(number);

    cout << "The square of " << number << " is: " << result << endl;

    return 0;
}

```


Fill in the blanks with the appropriate function call. The program below displays the date of birth in a dash-separated format
```cpp
#include <iostream>
#include <string>
using namespace std;

string dateOfBirth(string year, string month, string date) {
    return month + "-" + date + "-"+ year;
}
int main() {
    string year, month, date;

    cout << "Enter your year of birth: ";
    cin >> year;

    cout << "Enter your month of birth: ";
    cin >> month;

    cout << "Enter your date of birth: ";
    cin >> date;

    // Fill the line below with the appropriate function call
    string date_of_birth = ___________________________________________;

    cout << "Your date of birth is: " << date_of_birth << endl;

    return 0;
}
```

Fill in the blank with appropriate assertions. The program below is the same as the previous question, which displays the date of birth in a dash-separated format.
```cpp
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string dateOfBirth(string year, string month, string date)
{
    return month + "-" + date + "-"+ year;
}

int main()
{

    // Fill the line below with the appropriate assert statement

    assert(dateOfBirth("1912", "6", "23") _______________________);

    assert(_________________________________________ "12-09-1906");

    assert(______________________________________________________);
    return 0;
}

```



### 1. **Spot the errors - Championship Edition**. <a name="spot"></a>
**1a**.
This week, we’ll be doing something a little different in recitation. The program below is created by a coaster-selling company with a thoughtful gesture to provide customers with personalized coasters on their birthdays. To achieve this, the company requests the customer's birth month and their preferred coaster shape(circle or square). The program then determines the coaster's color and its price, which is then displayed to the customer. Each color has a value associated with it. The area of the coaster and this value is used to identify the price of the coaster.
The snippet of code below is free of errors; try running the file [rec4.cpp](rec4.cpp) in VS Code to see for yourselves!

```cpp
#include <iostream>
#include <string>

using namespace std;

/**
 * @brief Function to determine the color associated with their birth month        
 * @param birthMonth of the user
 * @return string - color associated with their birth month    
 */
string getColor(int birthMonth)
{
    // Check the birth month and return the corresponding color
    if (birthMonth >= 1 && birthMonth <= 3)
    {
        return "green";
    }
    else if (birthMonth >= 4 && birthMonth <= 6)
    {
        return "red";
    }
    else if (birthMonth >= 7 && birthMonth <= 9)
    {
        return "orange";
    }
    else if (birthMonth >= 10 && birthMonth <= 12)
    {
        return "blue";
    }
    else
    {
        return "";
    }
}

/**
 * @brief Function to calculate the area of the coaster based on shape(square or circle)
 * @param shape of the coaster that user specified
 * @param size of the coaster, which is either the side length (for a square) or the radius (for a circle)
 * @return double - area of the coaster based on the shape
 */
double getArea(string shape, double size)
{
    const double pi = 3.14159;
    if (shape == "square")
    {
        return size * size;
    }
    else if (shape == "circle")
    {
        return pi * size * size;
    }
    else
    {
        return 0.0;
    }
}

/**
* @brief Function to calculate the price of the coaster based on area and color, where each color has a specific cost associated with it
* @param area of the coaster
* @param color of the coaster
* @return double - price of the coaster based on area and color
*/
double getPrice(double area, string color)
{
    double cost = 0.0;
    if (color == "green")
    {
        cost = 4;
    }
    else if (color == "red")
    {
        cost = 3;
    } else if (color == "orange")
    {
        cost = 2;
    }
    else if (color == "blue")
    {
        cost = 1;
    }
    return area * cost;
}

int main()
{
    int birthMonth;
    string shape;
    double length;
    double radius;
    double area;

    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;

    cout << "Enter the shape of the coaster (square or circle): ";
    cin >> shape;
    if(shape == "square")
    {
        // If the shape is square, prompt for its length
        cout << "Enter the length of the square: ";
        cin >> length;
        area = getArea(shape, length);

    }
    else if(shape == "circle")
    {
        // If the shape is a circle, prompt for its radius
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = getArea(shape, radius);
    }

    // Get the color associated with the user's birth month
    string color = getColor(birthMonth);

    // Get the price of the coaster
    double price = getPrice(area, color);

    cout << "You will receive a "<< color << " color coaster with a price of $" << price << "." <<endl;

    return 0;
}

```

**1b**.
Your task is to work as a team to BREAK this code. Introduce as many unique compile-time errors as you can, but be sure to keep track of all of the errors you introduce. Keep in mind that the errors you introduce must be unique. Avoid introducing multiples of the same error.

In about 5 minutes, you’ll give your code to another team for them to try and debug. Whichever team catches the most errors wins! Who doesn’t enjoy a little friendly competition?

Keep a list of the bugs your team introduces on a Google Doc, paper, or here:
| Error                               | Line Number      |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |


**1c**.
Now it’s time for you to switch code with your competition. Your team’s job is to identify and fix as many errors as you can before time’s up! Be sure to keep track of all the errors you find. In order to win, your team needs to identify more bugs than the other team.

Keep a list of the bugs you’re able to find and fix below:

| Error                               | Line Number      |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |
| ---                                 | ---              |

**1d**.
Now, give the list of bugs you found back to the other team. They should do the same for you. Go through the list of bugs the other team found and verify them using your team’s list from earlier. How many bugs did the other team find?

-----------------------------

### 2. Pi Day  <a name="pi"></a>
In a charming bakery named "MathMuffins", a town surrounded by hills, the annual "Pi Day" celebration is approaching. This bakery is renowned for blending mathematics with the art of baking, creating pies adorned with mathematical designs and equations baked into their crusts.

As the mastermind behind this exciting venture, you're tasked with ensuring the success of Pi Day by precisely calculating the ingredients needed for your mathematical pies. To achieve this, you'll employ two specialized functions to calculate ingredient quantities accurately for both circular and spherical pies. Whether it's employing the π*r^2 equation for your delectable apple pie or the (4/3)*π*r^3 formula for your mouthwatering chocolate mousse sphere, your creations will not only exhibit mathematical precision but also offer irresistible flavors.

```cpp
/**
 * @brief Function to determine the area of a circular pie using its radius
 * @param radius of the circular pie
 * @return  double - area of circular pie        
 */
double calculateAreaOfCircularPie(double radius)
{
    // Your code goes here.
}


/**
 * @brief Function to determine the volume of a spherical pie using its radius
 * @param radius of the spherical pie
 * @return  double - volume of spherical pie   
 */
double calculateVolumeOfSphericalPies(double radius)
{
    // Your code goes here.
}

```
**2a**. Write an algorithm in pseudocode for the program above.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**2b**.  Imagine what a sample run of your program would look like. Think about at least two examples.

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

**2c**. Think about a situation where you would use an assertion to check a specific condition. Write **three** assert statements for each of the two functions.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

**2d**. Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test for the values used in your sample runs.

-----------------------------
<br>

### 3. Registration form <a name="reg"></a>
You are developing a messaging app, and you want to design a registration page where users can sign up and access the app. On the registration page, you will ask for the username and password. Write a C++ program that takes in a username, password, and confirm password(retype password). The program should check the following conditions:-
- The first password entered matches the retyped password.
- The length of the password is greater than or equal to 8.

Create two functions *passwordMatchCheck()* and *passwordLengthCheck()* that check for the above-mentioned conditions.

Display an appropriate message based on the validation results:
- If both conditions are met, display: "Password set successfully for [username]."
- If the password length is less than 8 characters, display: "Password must be at least 8 characters long."
- If the passwords do not match, display: "Passwords do not match."

(Hint: you can use '==' operator for string comparison)

**Example 1:**
```cpp
Input:
string username = "Stark";
string password = "winteriscoming";
string confirm_password = "winteriscoming"
```
*Output: Password set successfully for Stark.*

-------------------------------
**Example 2:**
```cpp
Input:
string username = "Arya";
string password = "noname";
string confirm_password = "noname"
```

*Output: Password must be at least 8 characters long.*

---------------------------------

**3a**. Write an algorithm in pseudocode for the program above.

-----------------------------

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**3b**.  Imagine what a sample run of your program would look like. Think about at least two examples.

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


**3c**. Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test for the values used in your sample runs.


-----------------------------
<br>


# Deliverables for Recitation <a name="deliverables"></a>
Submit your work on Canvas.
