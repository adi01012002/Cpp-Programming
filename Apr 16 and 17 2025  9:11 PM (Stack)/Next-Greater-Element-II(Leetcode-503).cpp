#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={4,7,8,5};
    int n=v.size();
    // for(int i=2*n-1;i>=0;i--){
    //     cout<<v[i%n]<<" "<<i%n<<endl;
    // }
    // cout<<endl;

    vector<int>ans(n,-1);
    stack<int>st;
    st.push(v[n-1]);
    for(int i=2*n-2;i>=0;i--){
        while(!st.empty()&& st.top()<=v[i%n]) st.pop();
        if(i<n&& !st.empty()){
            ans[i]=st.top();
        }
        st.push(v[i%n]);
    }
    for(int el:ans)cout<<el<<" ";
    cout<<endl;
}