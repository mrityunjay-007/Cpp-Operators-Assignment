#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a 5 digits number: "<<endl;
    cin>>a;

    int firstDigit = a/10000;
    int secondLastDig1it = (a/10)%10;
    int sum= firstDigit + secondLastDigit;

    cout<<"Sum of first digit "<<firstDigit<<" and second last digit "<<secondLastDigit<<" is: "<<sum<<endl;
    return 0;
}