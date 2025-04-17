#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a 3 digits number: "<<endl;
    cin>>a;

    int firstDigit = a/100;
    int secondDigit = (a/10)%10;
    int lastDigit = a%10;
    int sum = firstDigit + secondDigit + lastDigit;

    cout<<"Sum of digits of 3 digit number is: "<<sum<<endl;

    return 0;
}