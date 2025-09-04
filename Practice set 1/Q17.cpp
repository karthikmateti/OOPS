#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of terms:";
    cin>>n;
    int a=0;
    int b=1;
    int next;
    cout<<"fibonacci series:";
    for (int i=1;i<=n;i++){
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
    cout<<endl;
    return 0;

}