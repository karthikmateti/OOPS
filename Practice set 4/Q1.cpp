#include<iostream>
using namespace std;
class Rectangle{
private:
    float length;
    float breadth;
    float area;
public:
    Rectangle(){
        length=0.0;
        breadth=0.0;
        area=0.0;

    }
    void get_details(float l,float b){
        length=l;
        breadth=b;
        area=length*breadth;
        cout<<"area is:"<<area;
    }
};

int main(){
    Rectangle r1;
    r1.get_details(3.0,6.0);
    return 0;
}
