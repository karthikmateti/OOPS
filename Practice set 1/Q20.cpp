#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter first number:";
    cin>>a;
    int b;
    cout<<"enter second number:";
    cin>>b;
    int gcd=1;
    int min=(a<b) ? a:b;
    for (int i=1;i<min;i++){
        if(a%i==0 and b%i==0){
            gcd=i;
        }
    }
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd;
    return 0;
}