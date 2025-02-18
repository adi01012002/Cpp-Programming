#include<bits/stdc++.h>
using namespace std;
string solve(string val1,string val2,char ch){
    string ans="";
    ans+=val1;
    ans.push_back(ch);
    ans+=val2;
    return ans;
}
int main(){
    // string s="79+4*8/3-"; // => 7+9*4/8-3 
    // string s="794*8/+3-";   //  => 7+9*4/8-3  this is result for  with out bracket
    // string s="264*8/+3-"; // without bracket
    string s="26+4*8/3-"; // with bracket
    stack<string>st;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])) st.push(to_string(s[i]-'0'));
        else {
            char ch=s[i];
            string val2=st.top();
            st.pop();
            string val1=st.top();
            st.pop();
            string ans=solve(val1,val2,ch);
            st.push(ans);
        }
    }
    cout<<st.top();
}