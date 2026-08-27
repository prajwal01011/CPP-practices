#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    string name;
    int age;

    // person(string name,int age){

    //     this->name=name;
    //     this->age=age;

    //     }
    person(){
        cout<<"parent constructor"<<endl;


    }
    ~person(){
        cout<<"parent distructor"<<endl;
    }
    
};

class student:public person{

    public:
//name age rollno
    int rollno;



    void getinfo(){

        cout<<"name :"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"rollno :"<<rollno<<endl;

    }
    student(){
        cout<<"child constructor"<<endl;
    }
    ~student(){
        cout<<"child distructor"<<endl;
    }


};

int main(){
    student s1;
    s1.name="ram";
    s1.age=12;
    s1.rollno =30;
    s1.getinfo();
    



    return 0;
}