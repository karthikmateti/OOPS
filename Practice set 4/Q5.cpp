#include<iostream>
using namespace std;

class Time{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(){
        hours=0;
        minutes=0;
        seconds=0;
    }
    Time(int h,int m){
        hours=h;
        minutes=m;
        seconds=0;
    }
    Time(int a,int b, int c){
        hours=a;
        minutes=b;
        seconds=c;
    }
    void get_details(){
        cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds "<<endl;
    }
};

int main(){
    Time t1;
    t1.get_details();
    Time t2(5,25);
    t2.get_details();
    Time t3(9,10,29);
    t3.get_details();
}