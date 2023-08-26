// C++ program to generate random numbers between 0 and 100;
// C++ program to generate random numbers between 0 and 1000;

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int i;
    int num;
    // cout<<"Generating random numbers between 0 and 100 is: "<<endl;
    // cout<<"Generating random numbers between 0 and 1000 is: "<<endl;
    for(int i = 0; i < 10; i++)
    {
        num = rand()%100;
        cout<<num<<" ";
        // num = rand()%1000;
        // cout<<num<<" ";
    }
    return 0;
}