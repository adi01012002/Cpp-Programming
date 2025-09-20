#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="ACABDBDH";
    stack<char>st;
    for(char c: s){
        if(!st.empty()&&c=='B'&&st.top()=='A')st.pop();
        else if(!st.empty()&&c=='D'&&st.top()=='C')st.pop();
        else st.push(c);
    }
    cout<<st.size();
}