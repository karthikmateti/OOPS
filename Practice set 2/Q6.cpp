#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int reversed=0;
    do{
        int lastdigit=n%10;
        reversed=reversed*10+lastdigit;
        n=n/10;
    } while(n>0);
    cout<<"reversed num:"<<reversed;
    return 0;
}