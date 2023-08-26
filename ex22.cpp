//  C++ program to check whether the number is prime or not.

#include<iostream>
using namespace std;

int main()
{
    int n,i,c=0;

    cout<<"Enter the positive number is: ";
    cin>>n;

    if(n == 1)
    {
        cout<<"The smallest prime number is : 2"<<endl;
    }

    for (int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            c++;
            break;    
        }
    }
        if(c == 0)
        {
            cout<<"The number is prime the no. "<<n<<endl;
        }
        else
        {
            cout<<"The number is not a prime number. "<<n<<endl;
        }
    
    return 0;
}