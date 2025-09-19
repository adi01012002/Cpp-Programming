#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    stack<int>bt;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    while(!st.empty()){
        cout<<st.top()<<" ";
        int top=st.top();
        st.pop();
        bt.push(top);
    }

    while(!bt.empty()){
        st.push(bt.top());
        bt.pop();
    }
    cout<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}