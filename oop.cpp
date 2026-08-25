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
     //properties|attributes
    string name;
    string dept;
    
    string subject;


    //non parameterized constructor
    teacher(){
            dept="computer science";
        }
    //parameterized constructor
    teacher(string name,string dept,string subject,double salary){
       this-> name=name;
       this-> dept=dept;
       this-> subject=subject;
       this-> salary=salary;
    }
    teacher(teacher &originalObj)//copy constructor & pass by reference
    {
        cout<<"i am custom copy constructor..\n";
        this->name =originalObj.name;
        this->dept = originalObj.dept;
        this->subject = originalObj.subject;
        this->salary=originalObj.salary;

    }


   

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
    void getinfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"Subject :"<<subject<<endl;
    }

};


int main(){
    teacher t1("prajwal","computer science","c++", 100000);// teacher obj & constructor call
    //t1.getinfo();
    teacher t2(t1);//custom copy constructor
    t2.getinfo();
   

    




    return 0;
}