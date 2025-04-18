#include<bits/stdc++.h>
using namespace std;
void permutation(string org,string ans){
    if(org==""){
        // cout<<ans<<endl;
        return;
    }
    for(int i=0;i<org.size();i++){
        char ch=org[i];
        string left=org.substr(0,i);
        string right=org.substr(i+1);
        cout<<left<<" "<<right<<endl;
        permutation(left+right,ans+ch);
    }
}
int main(){
    string org="abc";
    permutation(org,"");
}