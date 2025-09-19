#include<bits/stdc++.h>
using namespace std;

auto nextGreaterEle(vector<int>v){
    stack<int>st;
    int n=v.size();
    vector<int>ans(n,-1);
    st.push(v[n-1]);
    for(int i=n-2;i>=0;i--){
        int ele=v[i];
        while(!st.empty()&&st.top()<ele)st.pop();
        if(st.size()!=0)ans[i]=st.top();
        st.push(v[i]);
    }
    return ans;

}

int main(){
    vector<int>v={3,1,2,5,4,6,2,3};
    auto ans=nextGreaterEle(v);
    for(int it : ans)cout<<it<<" ";
    
}