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
string s="79+4*8/3-";
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])) st.push(s[i]-'0');
        else{
            char ch=s[i];
            int val2 = st.top();
            st.pop();
            int val1 = st.top();
            st.pop();
            int ans = solve(val1, val2, ch);
            st.push(ans);
        }
    }
    cout<<st.top()<<endl;
    return 0;
}