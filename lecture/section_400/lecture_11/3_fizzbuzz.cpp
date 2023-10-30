// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 11: fizzbuzz example

#include<iostream>
#include<cassert>

using namespace std;

// sample inputs -> 2, 3, 5, 9, 15

// check if number is divisible by 3 and 5 then return fizzbuzz
// check if number is divisible by 3 then return fizz
// check if number is divisible by 5 then return buzz
// otherwise return the number

string fizzbuzz(int number)
{
    
    if(number % 3 == 0 && number % 5 == 0)
    {
        return "fizzbuzz";
    }
    else if(number % 3 == 0)
    {
        return "fizz";
    }
    else if(number % 5 == 0)
    {
        return "buzz";
    }
    else
    {
        return to_string(number);
        // to_string(int/double) -> numeric value to its equivalent string form
        // to_string(23) -> "23"
    }

}


int main()
{
    // T1 - 2
    assert(fizzbuzz(2) == "2");
    cout << "fizzbuzz works for 2" << endl;

    // T2 - 3
    assert(fizzbuzz(3) == "fizz");
    cout << "fizzbuzz works for 3" << endl;

    // T3 - 5
    assert(fizzbuzz(5) == "buzz");
    cout << "fizzbuzz works for 5" << endl;

    // T4 - 9
    assert(fizzbuzz(9) == "fizz");
    cout << "fizzbuzz works for 9" << endl;

    // T5 - 15
    assert(fizzbuzz(15) == "fizzbuzz");
    cout << "fizzbuzz works for 15" << endl;
    
    return 0;
}