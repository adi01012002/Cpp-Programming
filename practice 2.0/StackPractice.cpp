#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>&st){
    if(st.size()==0)return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    display(st);
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }

    // cout<<st.size();
    display(st);
    cout<<st.size();


}