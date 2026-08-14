//<<<<<<<<<<<<<<<<<<<<<<<<<<<simple id card::>>>>>>>>>>>>>>>>>
#include<iostream>
using namespace std;
int main(){
    string name;
    int phone;
    int age=0;
    cout<<"Enter your name:";
    getline(cin>>ws,name);

    cout<<"Enter your phone number:";
    cin>>phone;

    cout<<"Enter your age:";
    cin>>age;

    cout<<endl<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Phone:"<<phone<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<endl<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;

    return 0;
}