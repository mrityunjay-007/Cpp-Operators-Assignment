#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter 1st integer: "<<endl;
    cin>>a;

    cout<<"Enter 2nd Integer: "<<endl;
    cin>>b;
     float sum= a+b;
     float difference = a - b;
     float product = a*b;
     float divide = a/b;

     cout<<"Sum of two numbers is: "<<sum<<endl;
     cout<<"Difference of two numbers is: "<<difference<<endl;
     cout<<"Product of two numbers is: "<<product<<endl;
     cout<<"After dividing two numbers value is: "<<divide<<endl;

     return 0;
}