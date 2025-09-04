#include<iostream>
using namespace std;
int main(){
    int n;
    do{
        cout<<"enter a number:";
        cin>>n;
        if(n>=0){
            cout<<"you entered:"<<n<<endl;
        }

    } while(n>=0);
    cout<<"program ended!";
    return 0;
}
