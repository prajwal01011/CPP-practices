#include<iostream>
#include<string>
using namespace std;
class student{

    public:
    string name;
    double* cgpaptr;
    
    student(string name, double cgpa){

        this->name=name;
        cgpaptr = new double;
        *cgpaptr =cgpa;

    }
    //destructor
    ~student(){
        cout<<"hi i delete everything";
        delete cgpaptr;//memory leak control
    }
    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"cgpa :"<<*cgpaptr<<endl;
    }
};
int main(){
    student s1("ram kumar",6.7);
    s1.getInfo();
    


    return 0;
}