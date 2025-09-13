#include<iostream>
using namespace std;

class Circle {
private:
    int radius;
public:
    void set(){
        radius=5;
    }
    void get(){
        double area=3.14*radius*radius;
        cout<<"area:"<<area<<endl;
    }
};


int main(){
    Circle c1;
    c1.set();
    c1.get();
    return 0;
}