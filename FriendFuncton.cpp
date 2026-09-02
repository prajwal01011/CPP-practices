#include<iostream>
#include<string>
using namespace std;
//complex number
//    5 + 8i
//    6 + 12i
//-----------------------
//ans 11 + 20i
class complex{
    private:
    int a,b;
    public:
    void setnumber(int n1,int n2){
        a=n1;
        b=n2;

    }
    void PrintNumber(){
        cout<<"your number is: "<<a<< " + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1,c2;
    c1.setnumber(5,8);
    c2.setnumber(6,12);
    c1.PrintNumber();
    c2.PrintNumber();


    return 0;
}