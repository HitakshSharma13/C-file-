// C++ program to find the square root of a number using sqrt() function.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x;
    float square_root;
    cout<<"Enter the value of x is: ";
    cin>>x;

    square_root = sqrt(x);

    cout<<"The square root of a number x "<<x<<" is:"<<square_root<<endl;
    return 0;
}