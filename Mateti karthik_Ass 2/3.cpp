#include<iostream>
using namespace std;
// base class
class shape{
protected:
    float length;
    float breadth;
public:
    //funct to get dimensions
    void get(float l,float b){
        length=l;
        breadth=b;
    }
};
//derived class
class rectangle: public shape{
public:
    //funct to cal area
    float area(){
        return length*breadth;
    }
    //funct to cal perimeter
    float perimeter(){
        return 2*(length+breadth);
    }

};

int main(){
    rectangle rect;
    float l,b;
    cout<<"enter lenth and breadth of rect:";
    cin>>l>>b;
    rect.get(l,b);
    cout<<"area:"<<rect.area()<<endl;
    cout<<"perimeter:"<<rect.perimeter()<<endl;
    return 0;
}