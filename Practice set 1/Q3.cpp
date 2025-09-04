#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    if(a>b){
        cout<<a<<" is greater";
    }
    else if(a<b){
        cout<<b<<" is greater";
    }
    else {
        cout<<"both are equal";
    }
    return 0;
}