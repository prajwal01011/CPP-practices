#include<iostream>
#include<string>
using namespace std;
void fun(){
    static int x=0;//static varaible values stay's (i.e x) at the memory of program until the end of program
    cout<<"x :"<<x<<endl;
    x++;
}
class A{
    public:
        static int a;//static varaible on class
        void funa(){
            cout<<"a :"<<a<<endl;
            a=a+1;
        }
        
};
int A::a=0;//int A::a = 0; defines and initializes the static variable a that belongs to class A and also varaible name should match with class.*** -According to chat gpt 
class ABC{
public:
ABC(){cout<<"constructor\n";}
~ABC(){cout<<"distructor\n";}
};

int main(){
    A a1,a2;
    a1.funa();//0 due to stored value of "a" statically on class not obj
    a2.funa();//1 due to stored value of "a" statically on class not obj
    a1.funa();//2 due to stored value of "a" statically on class not obj
    a2.funa();//3 due to stored value of "a" statically on class not obj
    fun();//0 due to static function
    fun();//1 due to static function
    static ABC obj;//static obj

    cout<<"end of program\n";
    return 0;
}