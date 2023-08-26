// C++ program to find roots of Quadratic Equation using if else.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c;
    float x1, x2, realpart,imaginary_part, determinant;

    cout<<"Enter the value of a is: ";
    cin>>a;

    cout<<"Enter the value of b is: ";
    cin>>b;

    cout<<"Enter the value of c is: ";
    cin>>c;

    determinant = b*b -4*a*c;
    cout<<"The value of determinant is: "<<determinant<<endl;

    if(determinant > 0)
    {
        x1 = (-b + sqrt(determinant))/ (2*a) ;
        x1 = (-b - sqrt(determinant))/ (2*a) ;
        cout<<"The roots are different and real. "<<endl;
        cout<<"The value of x1 is: "<<x1<<endl;
        cout<<"The value of x2 is: "<<x2<<endl;
    }
    else if (determinant == 0)
    {
        x1 = (-b + sqrt(determinant))/ (2*a) ;
        cout<<"The roots are real and same."<<endl;
        cout<<"The value of x1 is equal to x2 is: "<<x1<<endl;
    }
    else
    {
        realpart = -b / (2*a) ;
        imaginary_part = sqrt(-determinant) / (2*a) ;
        cout<<"The roots are complex and different."<<endl;
        cout<<realpart<<" + "<<imaginary_part<<" i "<<endl;   
        cout<<realpart<<" - "<<imaginary_part<<" i "<<endl;   
    }
    

    return 0;
}