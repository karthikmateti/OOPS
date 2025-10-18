#include<iostream>
#include<string>
using namespace std;

//base class
class person{
protected:
    string name;
    int age;
public:
    void getperson(string n,int a){
        name=n;
        age=a;
    }
    void showperson(){
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
    }

};

//derived class 1
class employee:public person{
protected:
    int empid;
    float salary;
public:
    void getemployee(int id,float sal){
        empid=id;
        salary=sal;
    }
    void showemployee(){
        cout<<"employe id:"<<empid<<endl;
        cout<<"salary:"<<salary<<endl;
    }

};
//derived class 2 (derived from employee)
class manager:public employee {
private:
    string department;
public:
    void getmanager(string dep){
        department=dep;
    }
    void showmanager(){
        showperson();
        showemployee();
        cout<<"department:"<<department<<endl;
    }
};

int main(){
    manager m;
    m.getperson("karthik",30);
    m.getemployee(101,21322);
    m.getmanager("cs");
    cout<<"manager details";
    m.showmanager();
    return 0;
}
