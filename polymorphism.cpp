#include<iostream>
#include<string>
using namespace std;
//constructor overloading;
class student{
    public:
    string name;


    student(){
        cout<<"non-parameterized constructor"<<endl;
    }

    student(string name){
        this->name=name;
        cout<<"parameterized constructor"<<endl;

    }




};


int main(){
    student s1("ram");










    return 0;
}