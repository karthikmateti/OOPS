#include<iostream>
using namespace std;

class Book{
private:
    string title;
    string author;
    int price;
public:
    Book(string t){
        title=t;
        author="";
        price=0;
    }
    Book(string x ,string y){
        title=x;
        author=y;
        price=0;
    }
    Book(string t ,string a,int p){
        title=t;
        author=a;
        price=p;
    }
    void get_details(){
        cout<<"title:"<<title<<" author:"<<author<<" price:"<<price<<endl;
    }
};

int main(){
    Book b1("CLRS");
    b1.get_details();
    Book b2("CLRS","DATA STRUCTURES");
    b2.get_details();
    Book b3("CLRS","DATA STRUCTURES",1000);
    b3.get_details();
    return 0;

}