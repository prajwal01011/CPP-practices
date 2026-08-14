//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>find the hypotenous of right angle triangle<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a;
    double b;
    double c;

    cout<<"enter A:";
    cin>>a;
    cout<<"enter B:";
    cin>>b;

   
    c=sqrt(pow(a,2)+pow(b,2));
    cout<<"c="<<c<<endl;

    return 0;
}