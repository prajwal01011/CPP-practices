#include<iostream>
#include<string>
using namespace std;
//templets learning

template<typename T>
void print(T value){
    cout<<"value :"<<value<<endl;
}

template<typename G,int NUM>
class Array{
    G array[NUM];
public:
int getsize()const{return NUM;}

};


int main(){
    print(1);
    print<float>(1.2f);
    Array<int,5> array;
    cout<<array.getsize()<<endl;
    cin.get();




    return 0;

}