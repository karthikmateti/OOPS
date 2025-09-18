#include<iostream>
using namespace std;
class Distance{
private:
    int feet;
    int inches;
public:
    Distance(){
        feet=0;
        inches=0;
    }
    Distance(int a){
        feet=a;
        inches=0;
    }
    Distance(int x,int y){
        feet=x;
        inches=y;
    }
    void get_details(){
        cout<<feet<<"feet "<<inches<<"inches"<<endl;
    }
};

int main(){
    Distance d1;
    cout<<"d1"<<endl;
    d1.get_details();

    Distance  d2(3221);
    cout<<"d2"<<endl;
    d2.get_details();


    Distance d3(5213,612311213);
    cout<<"d3"<<endl;
    d3.get_details();
    return 0;
}
