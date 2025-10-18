#include<iostream>
#include<string>
using namespace std;

class Dictionary{
private:
    string keys[100];  //stores keys
    string values[100]; //stores values
    int size;  //no of key value pairs
public:
    //constructor
    Dictionary(){
        size=0;
    }
    //add value
    void add(string key,string value){
        keys[size]=key;
        values[size]=value;
        size++;
    }
    //search value
    void search(string key){
        for(int i=0;i<size;i++){
            if(keys[i]==key){
                cout<<"value for"<<key<<": "<<values[i]<<endl;
                return;
            }
        }
        cout<<"key "<<key<<" not found"<<endl;
    }
    //display 
    void display(){
        cout<<"Dictionary :";
        for(int i=0;i<size;i++){
            cout<<keys[i]<<": "<<values[i]<<endl;
        }
    }
};

int main(){
    Dictionary dict;
    dict.add("name","karthik");
    dict.add("age","20");
    dict.add("city","chennai");
    dict.display();
    dict.search("name");
    dict.search("country");
    return 0;
}
