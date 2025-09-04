#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a num:";
    cin>>n;
    int original=n;
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;

    }
     if(original==sum){
        cout<<"armstrong no";
    }
    else{
        cout<<"not armstrong no";
    }
    return 0;
}