#include <iostream>
using namespace std;

class University
{
private:
    string name;
    int ranking;

public:
    void set(string n, float r)
    {
        name = n;
        ranking=r;
    }
    void get(){
        cout<<"name:"<<name<<endl;
        cout<<"ranking:"<<ranking<<endl;
    }
};

int main(){
    University U1;
    U1.set("karthik",1);
    U1.get();
    return 0;
}