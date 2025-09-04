#include<iostream>
using namespace std;
int main(){
    int marks,sum=0,count=0;
    cout<<"enter marks:"<<endl;
    while(true){
        cin>>marks;
        if(marks==-1){
            break;
        }
        sum=sum+marks;
        count++;
    }
    if(count>0){
        float avg=sum/count;
        cout<<"avg marks:"<<avg<<endl;
    }
    else{
        cout<<"no marks entered."<<endl;
    }
    return 0;

}