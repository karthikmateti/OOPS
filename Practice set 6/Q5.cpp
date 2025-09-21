#include<iostream>
using namespace std;
class Car{
private:
    string brand;
    float price;
public:
//constructor
    Car(string b,float p){
        brand=b;
        price=p;
        cout<<"object created:"<<brand<<endl;
    }
    ~Car(){
        cout<<"object destroyed:"<<brand<<endl;
    }

    void get_details(){
        cout<<"brand:"<<brand<<endl;
        cout<<"price:"<<price<<endl;
    }
};
int main(){
    Car c1("BMW",121312.3);
    c1.get_details();
    Car c2("Audi",343242.432);
    c2.get_details();
    return 0;
}