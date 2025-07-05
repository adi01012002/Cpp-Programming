#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    vector<int>v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        v.pop_back();

    }
    void top(){
        if(v.size()==0){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        cout<<v[v.size()-1]<<endl;
    }
    void size(){
        cout<<v.size()<<endl;
    }
    void print(){
        if(v.size()==0){
        cout<<"Stack is Empty"<<endl;
        return;
    }
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack  st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.size();
    st.top();
    st.pop();
    st.top();
    st.size();
    st.print();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.size();
    st.pop();

}