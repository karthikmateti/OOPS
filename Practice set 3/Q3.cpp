#include<iostream>
using namespace std;

class Book{
private:
    string title;
    int price;
public:
    void setBook(){
        title="CLRS";
        price=1000;

    }
    void getBook(){
        cout<<"title of book:"<<title<<endl;
        cout<<"price:"<<price<<endl;
    }

};

int main(){
    Book b1;
    b1.setBook();
    b1.getBook();
    return 0;
}