// C++ program to raise any number X to power N

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    float x, result;
    cout<<"Enter the value of x is: ";
    cin>>x;
    
    cout<<"Enter the value of n is: ";
    cin>>n;

    result= pow(x, n);
    cout<<"The result of x "<<x<<"power n is "<<n<<" is: "<<result<<endl;
    return 0;
}