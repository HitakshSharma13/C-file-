// C++ program to find Cube Root of a Number.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a; 
    float result;
    cout<<"Enter the number a is: ";
    cin>>a;
    result = cbrt(a);
    cout<<"The Cube Root of a number "<<a<<" is: "<<result<<endl;
    return 0;
}