// C++ program to convert inches to feet, yards, meters and centimeter.

#include<iostream>
using namespace std;

int main()
{
    double inches, yards, feet, meters, centimeter;

    cout<<"Enter the value in inches is: ";
    cin>>inches;

    feet = (inches / 12);
    cout<<"The value of feet is: "<<feet<<" ft"<<endl;

    yards = (inches / 36);
    cout<<"The value of yards is: "<<yards<<" yards"<<endl;

    meters = (inches / 39.37);
    cout<<"The value of meters is: "<< meters<<" m"<<endl;

    centimeter = (inches / 2.54);
    cout<<"The value of centimeter is: "<<centimeter<<" cm"<<endl;
    return 0;
}