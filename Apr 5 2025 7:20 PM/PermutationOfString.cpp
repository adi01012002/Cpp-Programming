#include<bits/stdc++.h>
using namespace std;
void permutation(string ans,string org){
    if(org==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<org.size();i++){
        char ch=org[i];
        string l= org.substr(0,i);
        string r=org.substr(i+1);
        permutation(ans+ch,l+r);
    }
}
int main(){
    string s="abc";
    permutation("",s);
}