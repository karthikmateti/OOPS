#include<iostream>
using namespace std;
class Rectangle{
private:
    int length;
    int breadth;
public:
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    void get_details(){
        cout<<"length:"<<length<<endl;
        cout<<"breadth:"<<breadth<<endl;
    }
    float area(){
        return length*breadth;
        
    }
    friend void compareArea(Rectangle &r1,Rectangle &r2);

};
void compareArea(Rectangle &r1,Rectangle &r2){
    if(r1.area()>r2.area()){
        cout<<"first rectangle area is greater than second"<<endl;
    }
    else if(r1.area()<r2.area()){
        cout<<"first rectangle area is smaller than second"<<endl;
    }
    else{
        cout<<"both are equal"<<endl;    }

}
int main(){
    Rectangle rect1(10,5);
    Rectangle rect2(2,6);
    cout<<"area of rect1:"<<rect1.area()<<endl;
    cout<<"area of rect2:"<<rect2.area()<<endl;
    compareArea(rect1,rect2);


}
