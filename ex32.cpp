// C++ program to calculate HCF of two numbers using functions.

#include<iostream>
using namespace std;

int main()
{
    int a, b, gcd;
    cout<<"Enter the value of a is: ";
    cin>>a;
    cout<<"Enter the value of b is: ";
    cin>>b;

    for(int i = 1; i<=a && i<=b; i++)
    {
        if(a%i ==0 && b%i == 0)
        {
            gcd = i;
        cout<<gcd<<endl;
        }
    }
    cout<<"The HCF of two numbers "<<a<<" and "<<b<<" is: "<<gcd<<endl;
    return 0;
}