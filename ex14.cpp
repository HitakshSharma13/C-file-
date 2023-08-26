//  C++ program to calculate Compound Interest.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float p, r, t, ci;

    cout<<"Enter the Principle Amount is: ";
    cin>>p;
    
    cout<<"Enter the Rate of Interest is: ";
    cin>>r;

    cout<<"Enter the Time Period is: ";
    cin>>t;

    ci= p*pow((1+r/100),t);
    cout<<"The Compound Interest of principal amount "<<p<<" rate of interest "
    <<r<<" and time period "<<t<<" result is "<<ci<<endl; 

    return 0;
}