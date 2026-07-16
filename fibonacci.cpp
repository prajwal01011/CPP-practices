//Fn=Fn−1+Fn−2
#include<iostream>
using namespace std;
int main(){
    int n=10;
    int ans,a=0,b=1;
    

    for(int i=0;i<n;i++){
        
        cout<<a<<" ";
        ans=a+b;
        a=b;
        b=ans;
        
    }
    return 0;
}