#### **CSCI 1300 CS1: Starting Computing**
#### **Hoenigman/Naidu/Park/Ramesh - Fall 2023**
#### **Recitation 9 - week of October 30th, 2023**

# Table of contents
- [Topics](#topics)
- [Exercises](#exercises)
    - [1. Structs](#structs)
    - [2. Classes and objects](#classes)
- [Deliverables for Recitation](#deliverables)

# Topics <a name="topics"></a>
This recitation covers `struct` and basic `class`. Let us dive in!

# Exercises <a name="exercises"></a>

## 1. Structs <a name="structs"></a>

Read [Homework 7 background](https://github.com/CSCI1300-StartingComputing/CSCI1300-Fall2023/blob/main/homework/homework7/homework7.md#structs) to learn more about structs.

### Warmup

a.
The program below creates an instance of a struct and prints the information out.
```cpp
#include <iostream>

using namespace std;

// Define the struct for Person.
struct Person
{
    string name;
    int age;
    string occupation;
};

int main()
{
    // Create an instance of Person,
    Person person;

    // Assign values to person's attributes; see expected output below
    _________
    _________
    _________

    // Print out the person's information
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Occupation: " << person.occupation << endl;

    return 0;
}
```

Expected output:

```cpp
Name: Anna
Age: 20
Occupation: Software Engineer
```

b.
The program created two instances of Person and compared their occupation.
```c++
#include <iostream>

using namespace std;

struct Person
{
    string name;
    int age;
    string occupation;
};

int main()
{
    // Create two instances of Person;
    Person person_one = {"Anna", 20, "Software Engineer"};
    Person person_two = ______________________________________

    // compares the two Person's occupation

    if(____________________________________)
    {
        cout << person_one.name << " and " << person_two.name << " have the same occupation: " << person_two.occupation << endl;
    }
}

```

Expected output:

```cpp
Anna and Amy have the same occupation: Software Engineer
```


### The `Fish` struct

You are in charge of an aquarium, and you want to keep track of all the fish. First, let's create a Fish struct and a function to print out all the fish.

**Fish Members:**
| Attribute | Description |
| --------- | ----------- |
| `string`: name | The name of a fish, e.g. Minnow |
| `int`: gallons_required | The number of gallons of water required for this fish |

*Function Specifications*:
  * **Name**: displayFish()
  * **Parameters (in this order)**
    * ```vector<Fish>``` fish_vector: a vector containing ```Fish``` objects
  * **Return Type**: ```void```
    * Prints the name of all ```Fish``` in ```fish_vector```
  * Note: when creating the Fish instances, add them to a vector

Write a ```main()``` function that creates a vector of Fish objects. Call displayFish to print the names of Fish objects.

Note: you may use [fish_example.txt](data_files/fish_example.txt) file for example data.

Expected output:
```cpp
Minnow
Fancy Guppy
Blue Neon Guppy
Elephant Ear Guppy
```

**1a.** Write an algorithm in pseudocode for the displayFish().

-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**1b.** Imagine what a sample run of your program would look like. Think about at least two examples.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>

**1c.** Implement your solution in C++ using VS Code. Revise your solution, save, compile, and run it again. Are you getting the expected result and output? Keep revising until you do. Make sure you test boundary conditions and the values from the sample runs.

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

## 2. Classes and Objects <a name="classes"></a>

Read [Homework 7 background](https://github.com/CSCI1300-StartingComputing/CSCI1300-Fall2023/blob/main/homework/homework7/homework7.md#classes) to learn more about classes and objects.

### Warmup

The ```main()``` function creates two Animal objects and prints their information.

Animal.h
```c++
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal
{
    // data member
    private:  
        string _name;
        int _age;

    public:
        Animal();
        Animal(string, int);

        string getName() const;
        int getAge() const;

        void setName(string);
        void setAge(int);
};
#endif
```

Animal.cpp
```c++
#include <iostream>
#include "Animal.h"
using namespace std;

// default constructor
Animal::Animal()
{
    _name = "unknown";
    _age = 0;
}

// parameterized constructor
Animal::Animal(string name, int age)
{
    __________________________
    __________________________
}

// getter for name
__________________________
{
    return _name;
}

// getter for age
int Animal::getAge() const
{
    return _age;
}

// setter for name
void Animal::setName(string name)
{
    _name = name;
}

// setter for age
____________________________________
{
    _age = age;
}
```

animalDriver.cpp
```c++
#include <iostream>
#include "Animal.h"
using namespace std;

int main() {

    // creating an instance of Animal named dog using the default constructor
    Animal dog;

    cout << dog.getName() << endl;
    cout << dog.getAge() << endl;

    // create an instance of Animal named cat using the Parameterized constructor
    ___________________________________
    cout << cat.getName() << endl;
    cout << cat.getAge() << endl;  

}
```

Expected output:

```cpp
unknown
0
Kitty
12
```

### The `Aquarium` class

Next, let's create an `Aquarium` class as described below:

**Data Members (private)**
| Member Type | Member Name | Description |
| ------------ | ----------- | ----------- |
| `string` | _aquarist_name | The name of the aquarium owner. |
| `int`  | _gallons_used | The total number of gallons of water 'used' by fish; we'll use this to determine if there is enough space for another fish in the aquarium.  |
|`vector<Fish>`  | _fish | A vector of Fish in the aquarium |  


**Member Functions (public)**

| Member Functions | Description |
| ---------------- | ----------- |
| Default Constructor | Set `_aquarist_name` to empty and `_gallons_used` to 0.  |
| Parameterized Constructor | Set `_aquarist_name` to the `string` parameter. Note: this parameterized constructor only takes in the aquarist's name as input |
| `setAquaristName(string)`  | Set the `_aquarist_name` to the `string` parameter |
| `getAquaristName()`         | Returns the value of `_aquarist_name` member variable. |
| `setGallonsUsed()`        |Set the `_gallons_used` to the `int` parameter. |
| `getGallonsUsed()`        | Returns the value of `_gallons_used` member variable. |
| `loadFish(string)`   | Takes a `string` (the name of the file to be read) and populates the `fish` vector with Fish. Returns a `bool` - `true` if the Fish were loaded successfully and `false` otherwise. |
| `removeFish(string)` | Takes a `string` (the name of a Fish) and removes the Fish from the list of `_fish`. Returns a `bool` - true if removed successfully, false otherwise.|

**2a** Create the above class definition in `Aquarium.h`. Add the fish struct from Question 1 in `Aquarium.h`


<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
---------------------------


**2b** Implement all the member functions in `Aquarium.cpp`.

##### **The <code>loadFish</code> Member Function**

For this question you will implement the `loadFish` member function. 

*Function Specifications*:
  * **Name**: loadFish()
  * **Parameters (in this order)**:
    * ```string``` file_name: the name of the file to be read.
  * **Return Type**: ```vector<Fish>```
    * `true` if the file was opened successfully
    * `false` otherwise
  * **Notes**:
    * Empty lines should not be added to the vector.
    * You may assume that each non-empty line will contain valid data, i.e. each non-empty line will consist of a Fish name, and the gallons of water required for that Fish, separated by a comma. There will be exactly one comma on each line.
    * Fish names may have spaces in them, e.g. "Elephant Ear Guppy" is one of the fish names.
    * Assume that the txt files provided do **not** have duplicate fish listed.
    * You should use the `stoi()` method to convert the number of gallons of water required for each Fish from a `string` to an `int`.
    * **Hint**: You can use the `split()` function from Homework 6 with a comma (`,`) as the delimiter.


We have provided an example [fish_example.txt](data_files/fish_example.txt) file for you to use while developing your solution. A preview of this file is displayed below:

```
Lyretail Guppy,1
Red Panda Guppy,2
Elephant Ear Betta,3

Platinum Ogon Koi,5
Doitsu Koi,4
Red Oranda Goldfish,4
Black Koi,5

Jack Dempsey Cichlid,3
Blue Peacock Cichlid,3
```

**Example Usage**
```cpp
//create an aquarium object
Aquarium billys_aquarium("Billy");

//test return value for a file that doesn't exit
cout << billys_aquarium.loadFish("fake_file.txt") << endl;

//test return value for a file that does exit
cout << billys_aquarium.loadFish("fish_example.txt") << endl;
```

Expected output:
```
0
1
```


#### **The <code>removeFish</code> Member Function**

For this question you will implement the `removeFish` member function:

*Function Specifications*:
  * **Name**: removeFish
  * **Parameters (in this order)**:
    * ```string``` fish_name: The fish to be removed from the aquarium.
  * **Return Type**: `bool`
    * `true` if the fish was removed successfully 
    * `false` otherwise, if the fish doesn't exist in the aquarium
  * **Notes**:
    * Update the `_gallons_used` data member appropriately.
    * The fish name should be case **insensitive**, e.g. both "minnow" and "Minnow" refer to the same fish.
    * Remove the first fish occurrence if there are multiple instances of the fish in the aquarium

**Example Usage**
```cpp
//create an aquarium object
Aquarium marias_fish("maria");

//load fish
marias_fish.loadFish("fish_15.txt");

//remove fish that has not been selected
cout << marias_fish.removeFish("Butterfly Koi") << endl;

// remove fish that has been selected
cout << marias_fish.removeFish("Rose Petal Betta") << endl;
```

Expected output:
```
0
1
```

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
---------------------------

**2c** Write a ```main()``` function that creates Aquarium objects and tests all the constructors and member functions of Aquarium class.



<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
---------------------------


# Deliverables for Recitation <a name="deliverables"></a>
Complete the Recitation 9 assignment on [Canvas](https://canvas.colorado.edu/courses/95610/assignments/1835100).
