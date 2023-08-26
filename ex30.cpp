// C++ program to find Largest of three numbers using nested if.

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout<<"Enter the first number a is: ";
    cin>>a;
    
    cout<<"Enter the second number b is: ";
    cin>>b;

    cout<<"Enter the third number c is: ";
    cin>>c;

    if (a>=b && a>=c)
    {
        cout<<"The value of a is largest to the value of b and c is: "<<a<<endl;
    }
    else if(b>=a && b>=c)
    {
        cout<<"The value of b is largest to the value of a and c is: "<<b<<endl;
    }
    else if(c>=a && c>=b)
    {
        cout<<"The value of c is largest to the value of a and b is: "<<c<<endl;
    }
    // else
    // {
    //     cout<<"The value of a , b and c are same so all are equal."<<endl;
    // }
    
    return 0;
}