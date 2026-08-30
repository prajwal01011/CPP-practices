#include<iostream>
#include<string>
using namespace std;
//compile-time-polymorphism
class print{
    public:
    //function overloading
    void show(int x){
        cout<<"int :"<<x<<endl;
     }
    void show(char ch){
        cout<<"char :"<<ch<<endl;
     }
      

};

int main(){
    print p1;
    p1.show('&');

    return 0;
}