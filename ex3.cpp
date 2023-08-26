/// C++ program to find the quotient and remainder of 2 numbers

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c, d;
    // a = "divisor";
    // b = "dividend";
    // c = "quotient";
    // d = "remainder";
    cout<<"Enter the value of dividend of a is:";
    cin>>a;

    cout<<"Enter the value of divisor of b is:";
    cin>>b;
    
    c =a/b;
    d = a%b;

    cout<<"The value of the quotient c is: "<<c<<endl;
    cout<<"The value of the quotient d is: "<<d<<endl;

    return 0;
}