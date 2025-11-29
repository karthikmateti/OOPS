#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    vector<int>arr={3,4,2,35};
    vector<int>ans(arr.size()-1);
    stack<int>st;

    for(int i=0;i<arr.size();i++){
        while(!st.empty()&&arr[i]>arr[st.top()]){
            ans[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    for(int x:ans) cout<<x<<" ";
}