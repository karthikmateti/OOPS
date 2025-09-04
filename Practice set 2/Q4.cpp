#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"enter number:";
    cin>>n;
    for(int i=1;i<n;i++){
        sum=n*(n+1)/2;
    }
    cout<<"sum of first "<<n<<" natural numbers is:"<<sum;
}
