#include<bits/stdc++.h>
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
stack<int>st;
string s="-/*+79483";
    for(int i=s.length()-1;i>=0;i--){
        if(isdigit(s[i])) st.push(s[i]-'0');
        else{
            char ch=s[i];
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            int ans = solve(val1, val2, ch);
            st.push(ans);
        }
    }
    cout<<st.top()<<endl;
    // cout<<7+9*4/8-3;
    return 0;
}