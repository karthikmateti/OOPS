#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int sum=n*(n+1)/2;
    cout<<"sum of first "<< n <<" natural numbers is "<< sum;
    return 0;
}