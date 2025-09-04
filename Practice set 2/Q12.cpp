#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"enter a num between 1 to 50 :";
    cin>>n;
    if(n%3==0){
        cout<<"fizz";
    }
    else if(n%5==0){
        cout<<"buzz";
    }
    else if(n%3==0 && n%5==0){
        cout<<"fizzbuzz";
    }
    return 0;
}
