#include<iostream>
#include<string>
using namespace std;


class teacher{
    //properties|attributes
    string name;
    string dept;
    string salary;
    string subject;

    //methods|member functions
    void changeDept(string newDept){

        dept = newDept;
    }

};


int main(){
    teacher t1;// teacher obj



    return 0;
}