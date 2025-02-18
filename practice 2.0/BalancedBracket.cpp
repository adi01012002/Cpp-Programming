#include<bits/stdc++.h>
using namespace std;
bool balancedBracket(string s,int idx,stack<char>&st){
    if(idx==s.size())return true;
    if(s[idx]=='(')st.push(s[idx]);
    else if(s[idx]==')'){
        if(st.empty()){
            return false;
        }
        else if(st.top()=='(')st.pop();
    }
    return balancedBracket(s,idx+1,st);
}
int main(){
    stack<char>st;
    string s="(((()))))";
    bool flag=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')st.push(s[i]);
        else if(s[i]==')'){
            if(st.empty()){
                flag=false;
                break;
            }
            else if(st.top()=='(')st.pop();
        }
    }
    // // cout<<st.size();
    if(flag && st.size()==0)cout<<"Bracket is balanced";
    else cout<<"Bracket is not balanced";
    cout<<boolalpha;
    // cout<<(balancedBracket(s,0,st)?"Balanced":"Un-Balanced")<<endl;
    // (10>6?cout<<"10":cout<<"6");
    // cout<<st.size();
}