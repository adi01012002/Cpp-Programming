#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,1,5,6,2,3};
    int n=v.size();
    int area=0;
    stack<int>st;
    v.push_back(0);
    for(int i=0;i<n;i++){
        while(!st.empty() && v[i]<v[st.top()]){
            int height=v[st.top()];
            st.pop();
            int width=st.empty()? i : i-st.top()-1;
            area=max(area,height*width);
        }
        st.push(i);
    }
    cout<<area<<endl;
}

