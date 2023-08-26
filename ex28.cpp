// C++ program to generate Fibonacci Series for N numbers.

#include<iostream>
using namespace std;

// Fibonacci series value at the position. 
// int fib(int n)
// {
//     if(n<2)
//     {
//         return 1;
//     }
//     else
//     {
//     return fib(n-2) + fib(n-1);
//     }
// }

// int main()
// {
//     int a;
//     cout<<"Enter the value of a is: ";
//     cin>>a;
//     cout<<"The value of Fibonacci Series for N numbers is: "<<fib(a)<<endl;
//     return 0;
// }


//Fibonacci Series for N numbers

int main()
{
    int i, no, first =0, second=1, next;

    cout<<"How many terms you want to display? ";
    cin>>no;

    cout<<"The Fibonacci Series for "<<no<<" terms are "<<endl;
    for(int i = 0; i <no; i++)
    {
        cout<<" "<<first<<" ";
        next = first + second;
        first = second;
        second = next; 
    }

    return 0;
}