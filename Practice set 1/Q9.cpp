#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int fact=1;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}