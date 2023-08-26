// C++ to calculate to find sum and average of three numbers

#include<iostream>
using namespace std;

int main()
{
    float a, b , c, sum, average;

    cout<<"Enter the value of a is: ";
    cin>>a;

    cout<<"Enter the value of b is: ";
    cin>>b;

    cout<<"Enter the value of c is: ";
    cin>>c;

    sum = (a + b + c );
    cout<<"The sum of the three number a is "<<a<<" b is "<<b<<" and c is "<<c<<"are: "<<sum<<endl;

    average = (sum /3);
    cout<<"The average of the three number is: "<<average<<endl;
    return 0;
}