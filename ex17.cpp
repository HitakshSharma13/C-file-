// C++ program to check character is Uppercase, Lowercase, Digit and Special and its value in integer form

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the character to check is: ";
    cin>>ch;

    if (ch>=65 && ch<=90)
    {
        cout<<"Enter the character to check "<<ch<<" is the Uppercase Character and it value is: "<<int(ch)<<endl; 
    }
    else if(ch>=48 && ch<=57)
    {
        cout<<"Enter the character to check "<<ch<<" is the Digit Character and it value is: "<<int(ch) <<endl; 
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<"Enter the character to check "<<ch<<" is the Lowercase Character and it value is: "<<int(ch)<<endl; 
    }
    else
    {
        cout<<"Enter the character to check "<<ch<<" is the Special Character and it value is: "<<int(ch)<<endl; 
    }
     
    return 0;
}