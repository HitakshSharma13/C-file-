// C++ program to find power of a number using for loop.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int number, pow =1, p;
    cout<<"Enter the base of a number is: ";
    cin>>number;
    cout<<"Enter the power to a base "<<number<<" is: ";
    cin>>p;
    for (int i = p; i >0; i--)
    {
        pow = pow *number;
    }
    cout<<"The power of a number "<<number<<" ^ "<<p<<" is: "<<pow<<endl;
    return 0;
}