#include<iostream>
#include<string>
using namespace std;
//templets learning

template<typename T>
void print(T value){
    cout<<"value :"<<value<<endl;
}



int main(){
    print(1);
    print(1.5);
    print("skfjlasjf");
    print('a');




    return 0;

}