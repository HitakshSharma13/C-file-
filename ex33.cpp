// C++ program to find LCM of two numbers using functions.
// Is not working it is trash 
#include<iostream>
#include<cmath>
using namespace std;


void lcm(int , int );


int main()
{
    int a, b, gcd, lcm;
    cout<<"Enter the number a is: ";
    cin>>a;
    cout<<"Enter the number b is: ";
    cin>>b;

    lcm(a,b);

    return 0;
}
void lcm(int a, int b)
{
    int m,n;
    m = a;
    n = b;

    while (m!=n)
    {
        if(m>n)
        {
            m = m+a;
        }
        else
        {
            n = n+b;
        }
    }

    cout<<"The LCM of the two number a and b "<<a<<" and "<<b<<" is:"<<m<<endl;
}