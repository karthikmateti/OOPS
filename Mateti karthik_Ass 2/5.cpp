#include<iostream>
#include<string>
using namespace std;
//base class 1
class person{
protected:
    string name;
    int age;
public:
    void getperson(string n,int a){
        name=n;
        age=a;
    }
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }
};
//base class 2
class athlete{
protected:
    string sport;
    int ranking;
public:
    void getathelete(string s,int r){
        sport=s;
        ranking=r;
    }
    void show(){
        cout<<"sport:"<<sport<<endl;
        cout<<"ranking:"<<ranking<<endl;
    }
};

//derived class using multiple inheritance
class sportsperson:public person, public athlete{
public:
    void display(){
        cout<<"person details"<<endl;
        person::show();  //as both class have show(), so use ::
        cout<<"athelete details"<<endl;
        athlete::show();
    }

};

int main(){
    sportsperson s1;
    s1.getperson("karthik",20);
    s1.getathelete("cricket",5);

    cout<<"--sportsperson information--";
    s1.display();
    return 0;
}