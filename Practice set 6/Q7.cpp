#include<iostream>
using namespace std;

class Counter{
private:
    int count;
public:
static int totalcount;
    Counter(){
        count=0.0;
        totalcount++;
    }
    friend void get_details();

};
int Counter::totalcount=0;
void get_details(){
        cout<<"total count:"<<Counter::totalcount<<endl;
}
int main(){
    Counter c1;
    Counter c2;
    get_details();
    return 0;
}
