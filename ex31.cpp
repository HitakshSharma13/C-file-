// C++ program to check whether a number is palindrome or not

#include<iostream>
using namespace std;

int main()
{
    int num,rev=0, pal;
    cout<<"Enter the number is: ";
    cin>>num;
    pal = num;
    while (num>0)
    {
        rev = (rev *10) +(num % 10);
        num = num /10;
    }
    if(rev == pal)
    {
        cout<<"The number is a palindrome "<<pal<<endl;
    }
    else
    {
        cout<<"The number is not a palindrome "<<pal<<endl;
    }
    return 0;
}