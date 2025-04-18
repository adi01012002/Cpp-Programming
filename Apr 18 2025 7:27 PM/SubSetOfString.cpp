#include<bits/stdc++.h>
using namespace std;
void SubsetOfString(string org,string ans){
    if(org==""){
        cout<<ans<<endl;
        return;
    }
    char ch=org[0];
    SubsetOfString(org.substr(1),ans+ch);
    SubsetOfString(org.substr(1),ans);
}
int main(){
    string org="abc";
    SubsetOfString(org,"");
}