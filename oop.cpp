#include<iostream>
#include<string>
using namespace std;


class account{
    private:
    double balance;
    string password;//data hiding

    public:
    string username;
    string accountId;
};


class teacher{
    private:
    double salary;
    public:
    //constructor
    teacher(){
        cout<<"hi i am constructor"<<endl;
    }
    //properties|attributes
    string name;
    string dept;
    
    string subject;

    //methods|member functions
    void changeDept(string newDept){

        dept = newDept;
    }
    //setter
    void setSalary(double s){

        salary=s;
    }
    //getter
    double getSalary(){
        return salary;
    }

};


int main(){
    teacher t1;// teacher obj & constructor call
    t1.name="prajwal";
    t1.dept="c++";
    t1.subject="computer science";
    t1.setSalary(100000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;




    return 0;
}