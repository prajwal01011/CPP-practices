#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    string name;
    int age;

    person(string name,int age){

        this->name=name;
        this->age=age;

        }
    // person(){
    //     cout<<"parent constructor"<<endl;


    // }
    // ~person(){
    //     cout<<"parent distructor"<<endl;
    // }
    
};

class student:public person{

    public:
//name age rollno
    int rollno;
      student(string name,int age,int rollno) : person(name, age){
        this->rollno=rollno;
        cout<<"child constructor"<<endl;
    }



    void getinfo(){

        cout<<"name :"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"rollno :"<<rollno<<endl;

    }
  
   


};

int main(){
    student s1("ram",45,12);
    
    s1.getinfo();
    



    return 0;
}