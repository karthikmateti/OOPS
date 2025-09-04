#include<iostream>
using namespace std;
int main(){
    int number,reversed=0;
    cout<<"enter a number:";
    cin>>number;
    while(number!=0){
        int digit=number%10;
        reversed=reversed*10+digit;
        number=number/10;

    }
    cout<<"reversed number:"<<reversed;
    return 0;
}