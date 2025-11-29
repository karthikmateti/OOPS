#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    string s="abcabcbb";
    unordered_set<char>st;
    int l=0,ans=0;

    for(int r=0;r<s.size();r++){
        while(st.count(s[r])){
            st.erase(s[l]);
            l++;
        }
        st.insert(s[r]);
        ans=max(ans,r-l+1);
    }
    cout<<ans;
    
}