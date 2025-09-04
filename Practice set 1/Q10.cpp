#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter year:";
    cin>>n;
    if(n%4==0){
        cout<<n<<" is a leap year";
    }
    else{
        cout<<n<<" not a leap year";
    }
}