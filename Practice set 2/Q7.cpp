
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool isprime = true;
    cout<<"enter a number: ";
    cin>>n;
    if(n<=1){
        isprime=false;   // 0 and 1 are not prime
    }else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                isprime=false;
                break;
            }
        }
    }

    if(isprime){
        cout << "prime number";
    }else{
        cout << "not prime";
    }
    return 0;
}
