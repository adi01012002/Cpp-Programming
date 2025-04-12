#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
    stack<char>st;
    map<char,char>mp={{')','('},{'}','{'},{']','['}};
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty())return false;
            char top=st.top();
            st.pop();
            if(mp[s[i]]!=top)return false;
        }
    }
    return st.empty();
}
int main(){
    string s="]";
    bool ans=isValid(s);
    cout<<boolalpha<<ans<<endl;
}