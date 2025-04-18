#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,3,4,5,2,9,3,3,7,2};
    int n=v.size();
    stack<int>st;
    st.push(v[n-1]);
    vector<int>ans(n,-1);
    for(int i=n-2;i>=0;i--){
        while(!st.empty()&&v[i]>=st.top()){
            st.pop();
        }
        if(st.size()!=0)ans[i]=st.top();
        st.push(v[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}