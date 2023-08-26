// C++ program to swap two numbers without using third variable

#include<iostream>
#include<string>
using namespace std;

void swapPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x,y;

    cout<<"Enter the value of x is: ";
    cin>>x;

    cout<<"Enter the value of y is: ";
    cin>>y;

    swapPointer(&x, &y);

    cout<<"The value of (x, y) after is: ("<<x<<","<<y<<")"<<endl;
    return 0;
}