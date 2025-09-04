#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num:";
    cin>>n;
    int original=n;
    int reversed=0;
    while(n>0){
        int lastdigit=n%10;
        reversed=reversed*10+lastdigit;
        n=n/10;
    }
    if(original==reversed){
        cout<<"palindrome";


    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}