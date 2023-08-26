//  C++ program to print multiplication table of a given number.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n= 6;
    cout<<"Enter number is: ";
    cin>>n;
    for (int i = 1; i <=10; i++)
    {
    cout<<"The multiplication table is:"<<n*i<<endl;    
    }

    return 0;
}