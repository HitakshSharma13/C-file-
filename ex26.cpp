//  C++ program to Reverse a number using while loop

#include<iostream>
using namespace std;

int main()
{
    int num, rev=0;
    cout<<"Enter the number is: ";
    cin>>num;
    while (num > 0)
    {
        rev = (rev *10) +(num % 10);
        num = num /10;
    }
    cout<<"The reverse of number is: "<<rev<<endl;
    return 0;
}