#include<iostream>
using namespace std;
int main(){
    int number,reversed=0,original;
    cout<<"enter a number:";
    cin>>number;
    original=number;
    while(number!=0){
        int digit=number%10;
        reversed=reversed*10+digit;
        number=number/10;

    }
    if(original==reversed){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}