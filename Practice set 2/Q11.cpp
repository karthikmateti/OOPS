#include<iostream>
using namespace std;
int  main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int power;
    cout<<"enter power:";
    cin>>power;
    int i=1,answer=1;
    while(i<=power){
        answer=answer*n;
        i++;
    }
    cout<<"power is:"<<answer;
    return 0;
}