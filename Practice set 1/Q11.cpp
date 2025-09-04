#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"A grade";
    }
    else if(marks>=80 and marks<=89){
        cout<<"B grade";
    }
    else if(marks>=70 and marks<=79){
        cout<<"C grade";
    }
    else if(marks>=60 and marks<=69){
        cout<<"D grade";
    }
    else if(marks<60 and marks>40){
        cout<<"F grade";
    }
    else{
        cout<<"Fail";
    }
    return 0;

}