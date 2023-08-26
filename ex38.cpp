// C++ program to find Sum and Average of n numbers using for loop.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,x, sum = 0; 
    float average;
    cout<<"Enter how many number you want is: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cout<<"Enter the number "<<i<<" is:";
        cin>>x;

        sum = sum +x;
    }
    cout<<"The sum of the numbers is: "<<sum<<endl;

    average = float(sum)/ float(n);
    cout<<"Average of numbers is:"<<average<<endl;
    return 0;
}