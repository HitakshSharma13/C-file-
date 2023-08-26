// C++ program to find number of Digits in a number.
#include<iostream>
using namespace std;

int main()
{
    int num, count =0;
    cout<<"Enter any positive number is: ";
    cin>>num;
    while(num>0)
    {
        num = num/10;
        count = count + 1;
    }
    cout<<"The number of digits is: "<<count<<endl;
    return 0;
}