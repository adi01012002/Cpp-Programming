#include<bits/stdc++.h>
using namespace std;
auto previousSmallerEle(vector<int>v){
    int n=v.size();
    vector<int>ans(n,-1);
    stack<int>st;
    st.push(v[0]);

    for(int i=1;i<n;i++){
        int ele=v[i];
        while(!st.empty()&&st.top()>ele)st.pop();
        if(st.size()!=0)ans[i]=st.top();
        st.push(v[i]);
    }
    return ans;

}

int main(){
    vector<int>v={3,1,2,5,4,6,2,3};
    auto ans=previousSmallerEle(v);
    for(int it:ans)cout<<it<<" ";
}