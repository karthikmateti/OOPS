#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int rollno;
    float marks;
public:
    Student(){
        name="";
        rollno=0;
        marks=0.0;
    }
    Student(string n,int r){
        name=n;
        rollno=r;
        marks=0.0;
    }
    Student(string n,int r,float m){
        name=n;
        rollno=r;
        marks=m;
    }
    void get_details(){
        cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};

int main(){
    Student s1;
    cout<<"case1"<<endl;
    s1.get_details();
    Student s2("karthik",123);
    cout<<"case2"<<endl;
    s2.get_details();
    Student s3("karthik",123,1000.0);
    cout<<"case3"<<endl;
    s3.get_details();

}