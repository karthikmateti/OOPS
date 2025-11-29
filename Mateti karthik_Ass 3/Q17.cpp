#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int>num={1,2,3};
    int k=3;
    unordered_map<int,int>mp;
    mp[0]=1;
    int sum=0,cnt=0;

    for(int x:num){
        sum+=x;
        if(mp.count(sum-k)) cnt+=mp[sum-k];
        mp[sum]++;
    }
    cout<<cnt;
}