//run time polymorphism

#include<iostream>
#include<string>
using namespace std;
class parent{
    public:

    void getinfo(){
        cout<<"parent class\n";

    }
    //virtual function
    virtual void hello(){

        cout<<"hello from parent class\n";
    }
};

class child :public parent{
    public:

    void getinfo(){
        cout<<"child class\n";
    }
//virtual function overriding
    void hello(){

        cout<<"hello from child\n";
    }

};


int main(){
    child c1;
    c1.hello();

    return 0;
}