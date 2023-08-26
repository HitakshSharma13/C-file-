// C++ program to check whether a year is Leap Year or not.

#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<"Enter the year is: ";
    cin>>year;

    if(year%400 == 0)
    {
        cout<<"The year is leap year. "<<year<<endl;
    }
    else if(year%100 == 0)
    {
        cout<<"The year is not a leap year. "<<year<<endl;
    }
    else if(year%4 == 0)
    {
        cout<<"The year is not a leap year. "<<year<<endl;
    }
    else
    {
        cout<<"The year is not a leap year. "<<year<<endl;
    }

    return 0;
}