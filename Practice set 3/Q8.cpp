#include <iostream>
using namespace std;

class Account
{
private:
    int accountNo;
    float balance;

public:
    void set(int acc, float bal)
    {
        accountNo = acc;
        balance=bal;
    }
    void get(){
        cout<<"account no:"<<accountNo<<endl;
        cout<<"balance:"<<balance<<endl;
    }
};

int main(){
    Account p1;
    p1.set(123,1000);
    p1.get();
    return 0;
}