// CSCI 1300, Fall 2023
// Supriya Naidu
// Lecture 23: structs

#include<iostream>
#include<vector>

using namespace std;

// above main -> global scope
// struct NameOfStruct { variables};
// upper camel case for structs
// defining a struct called Product with different attributes/data members
struct Product
{
    string name;
    double price;
    string category;
};
// name, price and cateory are attributes/data members of Product struct

// Defining a struct allows us to add this struct to our list of data types (within this program)
// int, double, char, Product

// function to print the attributes of Product object
// structs are passed by value
void printProducts(Product p)
{
    cout << "==================PRODUCT====================" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Price: $" << p.price << endl;
    cout << "Category: " << p.category << endl << endl;
    p.price = 10; // updating the price here will not update the price in main()
}

// a function can return a struct
Product inflationUpdate(Product p)
{
    p.price = 100;
    return p;
}


int main()
{
    // int arr[10] = {23, 51, 34};

    // variables that can store values of diff data type
    // structure - struct

    // products -> apple, coffee, gas, soap, pencils,
    // price - > double, name -> string, tax -> double, weight -> double, category-> string

    int x; // defining an int var called x
    Product apple; // defining a Product struct variable/object called apple;

    x = 10;

    // approach 1 -> initialize individual attributes
    apple.price = 2.99;
    apple.name = "apple";
    apple.category = "fruit";

    // approach 2 -> using {}
    // int y = 20; // defining + initializing
    Product coffee = {"coffee", 4.99, "beverage"};

    cout << coffee.price << endl; 
    cout << coffee.name << endl;
    cout << coffee.category << endl;

    printProducts(apple);
    cout << apple.price << endl; // price will not be updated as structs are passed by value

    // int y = x; // x = 10
    // can use assignment operator(=) for copying
    Product apple1 = apple; // name, price and category of apple will be copied into name, price and category for apple1

    // cannot use == to compare two structs
    // apple1 == aple -> not allowed 
    // you need to compare individual attributes
    // if(apple1.price == apple.price && apple1.name == apple.name && apple1.name == apple.category)

    apple = inflationUpdate(apple);
    cout << apple.price << endl;

    // array of struct objects
    Product fruits[3] = {apple};

    // directly initialize an object into the array at poistion 1
    fruits[1] = {"pear", 3.25, "fruit"};

    // create an object and then assign the object to position 2 in the array
    Product peach = {"peach", 4.00, "fruit"};
    fruits[2] = peach;

    // print info about Product object at position 1
    printProducts(fruits[1]); 

    // access/update attribute for object at position 1 in the array
    fruits[1].price = 2.45;
    printProducts(fruits[1]);

    int arr[2] = {1, 2};
    arr[1] = 10;

    // vector of objects
    Product potato = {"potato", 0.99, "vegetable"};
    Product bokchoy = {"bokchoy", 1.99, "vegetable"};
    vector<Product> veggies = {potato};
    veggies.push_back(bokchoy);
    // can also insert object directly into the vector; similar to line 91
    veggies.push_back({"carrots", 3.50, "vegetable"});





    return 0;
}