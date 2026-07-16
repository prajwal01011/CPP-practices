#include<iostream>
using namespace std;
int add(int a,int b){
    int z=a+b;
    cout<<"The sum 0f"<<a<<"and"<<b<<"is"<<z;
} 

int main(){
    int n1,n2;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;
    add(n1,n2);
    return 0;
}
