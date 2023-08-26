//<<  C++ program to check whether given number is Even or Odd.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number is: ";
    cin>>n;

    if (n%2 == 0)
    {
        cout<<"The number "<<n<<" is a even number."<<endl;
    }
    else
    {
        cout<<"The number "<<n<<" is a odd number."<<endl;
    }
    
    return 0;
}