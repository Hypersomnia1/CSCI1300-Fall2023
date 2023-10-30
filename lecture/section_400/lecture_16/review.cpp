#include<iostream>

using namespace std;

int addOne(int x)
{
    return x+1;
}

void printOne(int x)
{
    cout << x+1;
}

int main()
{
    // boolean conditoinals
    int a = 5;
    int b = 4;
    cout<<(a < b)<<endl; // 0

    int c = 6;
    cout<<((a < b)||(c > a))<<endl; // 0 || 1 = 1
    // 1 && 1 && 1 && 1 && 0 = 0
    int d = 4;
    cout<<((a < b) && (d==b))<<endl; // 0 && 1 = 0
    cout<<(!(a < b) && (d==b))<<endl; // !0 && 1 = 1 && 1 = 1
    cout<<(!(a < b) || ((d==b) && (c > 10)))<<endl; // !0 || (1 && 0) = 1 || 0 = 1

    // if else if
    a = 10;
    if(a == 10) cout << "1"; // okay to not have braces if there is only one stmt
    else cout << "2";
    cout << "3";
    

    // cout <<
    // cin >>

    // // strings
    // string name = "spongebob";
    // name[0] will access the first letter in name
    // each letter in the string is of char data type

    // length - string_var.length() will return number of letters

    // substr

    // functions
    int val = addOne(10);
    cout << addOne(20);

    printOne(10); // void function. this  is the only option

    // // while
    int num = 0;
    while(num < 5)
    {
        cout << num << endl;
        num++;
    }

    num = 0;
    while(num < 5)
    {
        cout << num << endl;
        num--;
    }

    num = 0;
    while(num < 5);
    {
        cout << num << endl;
        num--;
    }

    int x = 0;
    cout << "Enter number: ";
    cin >> x;
    // code that does some computation with x

    // assert(LHS == RHS)
    // lhs = function_call(arguments)
    // rhs = expected value

    
    // assert(add(1,2) == 3); // black box

    return 0;
}
