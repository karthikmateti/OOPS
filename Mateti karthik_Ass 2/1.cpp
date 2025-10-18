#include<iostream>
using namespace std;

class simpleList{
private:
    int arr[100];  //fixed size
    int size;    // no of elements
public:
    //constructor to initialize
    simpleList(){
        size=0;
    }
    //add element
    void add(int value){
        arr[size]=value;
        size++;
    }
    //remove last element
    void remove(){
        if(size>0)
            size--;
        else
            cout<<"list empty";
    }
    //dispay elements
    void display(){
        cout<<"[";
        for(int i=0;i<size;i++){
            cout<<arr[i];
            if(i!=size-1)
                cout<<", ";
        }
        cout<<"]"<<endl;
    }
    //get size
    int getsize(){
        return size;
    }

};

int main(){
    simpleList L1;
    L1.add(10);
    L1.add(20);
    L1.add(30);
    cout<<"List elements:";
    L1.display();
    L1.remove();
    cout<<"one element removed";
    L1.display();
    cout<<"current size:"<<L1.getsize()<<endl;
    return 0;

}