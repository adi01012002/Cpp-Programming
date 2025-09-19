#include<bits/stdc++.h>
using namespace std;
bool isValidBracket(string s){
    unordered_map<char,char>mp={{']','['},{'}','{'},{')','('}};
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='[')st.push(s[i]);
        else{
            if(st.size()==0)return false;
            if(st.top()==mp[s[i]])st.pop();
            else return false;
        }
    }
    if(st.size()==0)return true;else return false;
}

int main(){
    string s="([{[}]][()])";
    cout<<boolalpha<<isValidBracket(s);
}