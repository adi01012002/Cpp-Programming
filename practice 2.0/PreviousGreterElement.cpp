#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    vector<int>v={3,1,2,5,4,6,2,3};
    int n=v.size();
    vector<int>pge(n,-1);
    st.push(v[0]);
    for(int i=1;i<n;i++){
        int a=v[i];
        while(st.size()!=0 && st.top()<a){
            st.pop();
        }
        if(st.size()!=0) pge[i]=st.top();
        st.push(a);
    }
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
    cout<<endl;
}