#include<bits/stdc++.h>
using namespace std;
string solve(string val1,string val2,char ch){
    string ans="";
    ans.push_back(ch);
    ans+=val1;
    ans+=val2;
    return ans;
}
int main(){
    string s="79+4*8/3-";
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
    //-+7/*9483
}