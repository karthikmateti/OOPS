#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"enter third number:";
    cin>>c;
    if(a>b and b>c){
        cout<<a<<" is greater";
    }
    else if(b>a and b>c){
        cout<<b<<" is greater";
    }
    else if(c>a and c>b){
        cout<<c<<" is greater";
    }
    else {
        cout<<"All are equal";
    }
    return 0;
}