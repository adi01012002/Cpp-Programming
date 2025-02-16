#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    vector<int>v={3,1,2,5,4,6,2,3};
    int n=v.size();
    vector<int>nge(n,-1);
    st.push(v[n-1]);
    for(int i=n-2;i>=0;i--){
        int a=v[i];
        while(st.size()!=0&&st.top()<a){
            st.pop();
        }
        if(st.size()!=0) nge[i]=st.top();
        st.push(a);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;
}