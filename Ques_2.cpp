#include<iostream>
using namespace std;
int main(){
    int a,b;
    
    cout<<"Enter the first value: "<<endl;
    cin>>a;
    cout<<"Enter the second value:"<<endl;
    cin>>b;

    bool c=(a<50 & a<b) ? true: false;
    cout<<c<<endl;

    return 0;
}