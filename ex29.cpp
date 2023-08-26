//  C++ program to check whether a number is Armstrong or not.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num, originalNum, remainder, result = 0;
    cout<<"Enter three digit number is: ";
    cin>>num;
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += remainder * remainder *remainder;
        originalNum = originalNum /10;
    }
    if(result == num)
    {
        cout<<"The number "<<num<<" is an Armstrong number. "<<endl;
    }
    else
    {
        cout<<"The number "<<num<<" is not an Armstrong number."<<endl;
    }
    
    return 0; 
}