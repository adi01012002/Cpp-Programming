#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string s){
    stack<char>st;

    for(int i=0;i<s.size();i++){
        if(s[i]=='(')st.push(s[i]);
        else{
            if(st.empty())return false;
            st.pop();
        }
    }
    if(st.size()==0)return true;else return false;
}
int main(){
    string s="()";
    cout<<boolalpha<<isValidParenthesis(s);
}