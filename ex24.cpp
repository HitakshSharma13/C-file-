// C++ program to find Factorial of a number using Recursion

#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n)
{
    if (n <=1)
    {
    return 1;
    }
    return  n * factorial(n - 1);    
}

int main()
{
    int a;
    cout<<"Enter a number is: ";
    cin>>a;
    cout<<"The factorial of a  is "<<a<<" and the value is: "<<factorial(a)<<endl;
    return 0;
}