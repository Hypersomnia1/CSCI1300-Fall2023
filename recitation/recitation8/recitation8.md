#### **CSCI 1300 CS1: Starting Computing**
#### **Hoenigman/Naidu/Park/Ramesh - Fall 2023**
#### **Recitation 8 - week of October 23rd, 2023**

# Table of contents
- [Topics](#topics)
- [Exercises](#exercises)
    - [0. Warmup](#warmup)
    - [1. Find the busiest day at the motel](#busy)
    - [2. File Concatenation](#concat)
- [Deliverables for Recitation](#deliverables)

# Topics <a name="topics"></a>
This recitation covers `file streams`. Let us dive in!

# Exercises <a name="exercises"></a>

### 0. Warmup <a name="warmup"></a>

a. 
The program needs to print all the contents of the file `input.txt` present in the current folder.

```cpp
#include<iostream>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 
{
    // Fill the line below to make an input file stream from the file name given above.
    _____________________________________
    string text;  
    while(getline(infile, text))
    {      
        cout << text << endl;
    }
    return 0;
}

```

b.
The program needs to write all the contents of the file `input.txt` to the file `output.txt`. Assume that both these files are present in the current folder.

```cpp
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() 
{
    // Fill the line below to make an input file stream from the file input.txt.
    _______________________________
    // Fill the line below to make an output file stream to the file output.txt.
    _______________________________
    string text;  
    while(getline(infile, text))
    {
        // Fill the line below to write the text to the output file stream.
        outfile << text << endl;
    }
    return 0;
}

```

-----------------------------

### 1. Find the busiest day at the motel <a name="busy"></a>
You run a motel in Wisconsin and you seek to improve your business. You intend to employ more staff during the day of highest traffic. Given that the visitor data is in the form of a text file, your job is to write a program to determine the busiest day of the week.

**Notes:**
* Each line in the file is going to be of the format:
  * `dayOfWeek <space> visitor1,visitor2,..,visitorN` 
* Determine the amount of traffic simply by counting how many visitors are logged. 
* The days of the week will be Monday-Friday, in chronological order.
* If there are multiple days with the most visitors, pick the one which comes first in the file. 
* Every day will have at least one visitor.

*Sample input files:*

[visitors.txt](inputs/visitors.txt)
```
Monday Brad,George,Johnny
Tuesday George
Wednesday Brad,Jude
Thursday Jason,Jared,Brad,Ben
Friday Christian,Robert
```

Example output 
```cpp
Enter the filename: 
visitors.txt
Thursday is the busiest day of the week at the motel.
```

**1a)** Write an algorithm in pseudocode for the program above. 

-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**1b)** Imagine how a sample run of your program would look like. Think about at least two examples.

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

**1c)** Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

-----------------------------

### 2. File Concatenation <a name="concat"></a>

**Motivating Example:**

The `cat` command (short for "concatenate") is one of the most frequently used commands in Linux and Mac operating systems. The `cat` command allows us to print concatenated contents of input files with the below command. It also allows us to combine copies of files, view contents of one or more files, and create new files.
```
cat file1.txt file2.txt
```

**Your task:**

Write a program that concatenates the contents of two files and stores it in an output file. The program should ask the user to enter input and output filenames.

If one of the input files cannot be opened, then print "Could not open file/files." If you can read files and concatenate them successfully, then print "Files concatenated successfully".

*Sample input files:*

[input1.txt](inputs/input1.txt) 
```
Lorem ipsum dolor sit amet, consectetur adipiscing elit. 
```
[input2.txt](inputs/input2.txt) 
```
Morbi nec felis pretium, elementum sem eu, tempor massa.
```
Example output
```
Enter the input filenames that you want to concatenate:
input1.txt
input2.txt
Enter the output filename:
output.txt
Files concatenated successfully
```
output.txt should have the following content:
```
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Morbi nec felis pretium, elementum sem eu, tempor massa.
```

**2a)** Write an algorithm in pseudocode for the program above. 

-----------------------------
**Pseudocode:**
<br/><br/>
<br/><br/>
<br/><br/>
<br/><br/>

**2b)** Imagine how a sample run of your program would look like. Think about at least two examples.

-----------------------------
**Sample Run 1:**
<br/><br/>
<br/><br/>

-----------------------------
**Sample Run 2:**
<br/><br/>
<br/><br/>



**2c)** Implement your solution in C++ using VS Code. Revise your solution, save, compile and run it again. Are you getting the expected result and output? Keep revising until you do. Make you sure you test for the values used in your sample runs, and for the boundary conditions.

<br>


-----------------------------

# Deliverables for Recitation <a name="deliverables"></a>
Complete the Recitation 8 assignment on [Canvas](https://canvas.colorado.edu/courses/95610/assignments/1828312).
