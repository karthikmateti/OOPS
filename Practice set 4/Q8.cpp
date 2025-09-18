#include<iostream>
using namespace std;

class Car{
private:
    string brand;
    string model;
    int price;
public:
    Car(string t){
        brand=t;
        model="";
        price=0;
    }
    Car(string x ,string y){
        brand=x;
        model=y;
        price=0;
    }
    Car(string t ,string a,int p){
        brand=t;
        model=a;
        price=p;
    }
    void get_details(){
        cout<<"brand:"<<brand<<" model:"<<model<<" price:"<<price<<endl;
    }
};

int main(){
    Car c1("Suzuki");
    c1.get_details();
    Car c2("Suzuki","swift");
    c2.get_details();
    Car c3("Suzuki","swift",100000000);
    c3.get_details();
    return 0;

}