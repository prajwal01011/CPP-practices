#include<iostream>
#include<string>
using namespace std;
class student{

    public:
    string name;
    double cgpa;
    
    student(string name, double cgpa){

        this->name=name;
        this->cgpa=cgpa;
    }
    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"cpga :"<<cgpa<<endl;
    }
};
int main(){
    student s1("ram kumar",6.7);



    return 0;
}