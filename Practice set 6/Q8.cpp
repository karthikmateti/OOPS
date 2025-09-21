#include<iostream>
using namespace std;

class Circle{
private:
    int radius;
    static float pi;
public:
    Circle(int r){
        radius=r;
    }
    float area(){
        return pi*radius*radius;
    }
    static void setPi(float value){
        pi=value;
    }
};
float Circle::pi=3.14;
int main(){
    Circle c1(5);
    cout<<"area is:"<<c1.area()<<endl;
    Circle::setPi(3.1453453);
    Circle c2(7);
    cout<<"area updated :"<<c2.area()<<endl;
    return 0;

}