//  C++ program to check whether a character is Vowel or Consonant.

#include<iostream>
using namespace std;

int main()
{
    char  ch;
    cout<<"Enter the alphabetic character is: ";
    cin>>ch;

    if(ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout<<"The character  is a vowel in lower case is "<<ch<<endl;
    }
    else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout<<"The character is a consonant in upper case is "<<ch<<endl;
    }
    else
    {
        cout<<"The other character in lower or upper case is consonant is "<<ch<<endl;
    }
    return 0;
}