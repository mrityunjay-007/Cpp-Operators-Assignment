#include<iostream>
using namespace std;
int main(){
    int totalWithA;
    int  boysWithA=17;

    totalWithA = (80*45)/100;  //total students having grad A are 80% of 45 students class strength

    int girlsWithA = totalWithA - boysWithA;

    cout<<"Total girls with A grade are: "<<girlsWithA<<endl;

    return 0;

}