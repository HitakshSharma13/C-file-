// C++ program to find Factorial of a number using  loop.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i, n, factorial=1;
    cout<<"Enter the number is: ";
    cin>>n;
    for(i =1; i<=n; ++i)
    {
        factorial *= i;
    }
    cout<<"The value of factorial "<<n<<" is: "<<factorial<<endl;

   return 0;
}