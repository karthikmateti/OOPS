#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter first number:";
    cin>>a;
    int b;
    cout<<"enter second number:";
    cin>>b;
    int min=(a<b)? a:b;
    int gcd=1;
    for(int i=2;i<min;i++){
        if(a%i==0 and b%i==0){
            gcd=i;
        }
    }
    cout<<"gcd is:"<<gcd;
}