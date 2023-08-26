// C++ program to convert days into years, weeks and days

#include<iostream>
using namespace std;

int main()
{
    int y, d, w;
    cout<<"Enter  the number of days is: ";
    cin>>d;

    y = d/365;
    d = d%356;
    w = d/7;
    d = d%7;

    cout<<"The number of years is: "<<y<<endl;
    cout<<"The number of weeks is: "<<w<<endl;
    cout<<"The number of days is: "<<d<<endl;
    return 0;
}