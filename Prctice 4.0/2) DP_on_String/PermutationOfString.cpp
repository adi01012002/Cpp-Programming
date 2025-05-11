#include<bits/stdc++.h>
using namespace std;
void permutation(string s,string ans){
    if(s==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        string l=s.substr(0,i);
        string r=s.substr(i+1);
        permutation(l+r,ans+ch);
    }
}
int main(){
    string s="abc";
    permutation(s,"");
}