// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 23: structs

#include<iostream>
#include<vector>
using namespace std;

// structures - struct
// above main -> global scope
// struct NameOfStruct { var };
// upper camel case for structs
// defining a struct named Product
struct Product
{
    string name;
    string category;
    double price;
};
// name, price and category are the attributes/data members of the Product struct

// Defining a struct allows us to add this struct to our list of data types (within this program)
// int, double, char, Product

// function to print the details of a Product object
// structs are passed by value
void printProducts(Product p)
{
    cout << "====================PRODUCT======================" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Price: $" << p.price << endl;
    cout << "Category: " << p.category << endl << endl;
    p.price = 10; // updating the price here will not update the price in main()
}

// a function can return a struct
Product inflationUpdate(Product p)
{
    p.price*=1.3;
    return p;
}

int main()
{
    // int arr[10] = {1, 2, 3, 40};

    // toothpaste, ramen, costume, ice cream -> products
    // price -> double, name -> string , category -> string, weight -> double 
    // defining an int var called x
    int x;
    Product apple; // defining a Product variable/object named apple

    x = 10;
    // approach 1 -> initializing every attribute
    apple.price = 2.25;
    apple.name = "apple";
    apple.category = "fruit";

    // int y = 10; // defining + initializing
    // appraoch 2 -> using {}
    Product toothpaste = {"toothpaste", "toiletries", 1.20};

    cout << apple.name << endl;
    cout << apple.price << endl;
    cout << apple.category << endl;


    printProducts(toothpaste);
    cout << toothpaste.price << endl; // price will not be updated as structs are passed by value

    // int y = x; // x = 10
    // can use assignment operator(=) for copying
    Product apple1 = apple; // name, price and category of apple will be copied into name, price and category for apple1

    // cannot use == to compare two structs
    // apple1 == aple -> not allowed 
    // you need to compare individual attributes
    // if(apple1.price == apple.price && apple1.name == apple.name && apple1.name == apple.category)

    apple = inflationUpdate(apple);
    // int arr1[10] ={1, 2, 3};
    // arr1[0] -> int

    // array of struct objects
    Product fruits[3] = {apple};

    // directly initialize an object into the array at poistion 1
    fruits[1] = {"pear", "fruit", 3.25};

    // create an object and then assign the object to position 2 in the array
    Product banana = {"banana", "fruit", 1};
    fruits[2] = banana;

    // print info about Product object at position 1
    printProducts(fruits[1]); 

    // access/update attribute for object at position 1 in the array
    fruits[1].price = 2.85;
    printProducts(fruits[1]);

    // vector of objects
    Product potato = {"potato", "vegetable", 0.99};
    Product bokchoy = {"bokchoy","vegetable", 1.99};
    vector<Product> veggies = {potato};
    veggies.push_back(bokchoy);
    // can also insert object directly into the vector; similar to line 88
    veggies.push_back({"carrots", "vegetable", 3.50});

    return 0;
}