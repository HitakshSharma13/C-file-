// C++ program to find whether given number is Odd or Even.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n is: ";
    cin>>n;

    if(n%2 == 0)
    {
        cout<<"The number is even. "<<endl;
    }
    else
    {
        cout<<"The number is odd. "<<endl; 
    }
    return 0;
}