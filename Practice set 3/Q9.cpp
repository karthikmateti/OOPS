#include<iostream>
using namespace std;

class Temperature {
private:
    float celsius;
public:
    void set(){
        celsius=32;
    }
    void get(){
        double fahrenheit=(celsius*1.8)+32;
        cout<<"celsisus->fahrenheit :"<<fahrenheit<<endl;
    }
};


int main(){
    Temperature T1;
    T1.set();
    T1.get();
    return 0;
}