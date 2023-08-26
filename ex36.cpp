// C++ program to find sum of digits of a Number using while loop 

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num, count, sum = 0, b;
    cout<<"Enter the number is: ";
    cin>>num;
    
    b = num;
    while (b>0)
    {
        count = b%10;
        b =  b/10;
        sum = sum +count;
    }
    cout<<"Sum of digits of a Number is: "<<sum<<endl;
    return 0;
}