#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    vector<int>num={1,5,7,9};
    int target=8;

    unordered_map<int,int>mp;
    for(int i=0;i<num.size();i++){
        int need=target-num[i];
        if(mp.count(need)){
            cout<<mp[need]<<" "<<i;
            return 0;
        }
        mp[num[i]]=i;
    }

}