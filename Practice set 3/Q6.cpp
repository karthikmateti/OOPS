#include <iostream>
using namespace std;

class Car
{
private:
    string brand;
    string model;

public:
    void set(string b, string m)
    {
        brand = b;
        model = m;
    }
    void get(){
        cout<<"brand:"<<brand<<endl;
        cout<<"model:"<<model<<endl;
    }
};

int main(){
    Car cars[2];
    cars[0].set("Mahindra","M1");
    cars[1].set("Toyota","T1");
    cars[2].set("Suzuki","s1");
    for(int i=0;i<3;i++){
        cars[i].get();
    }
    
    return 0;
}