#include<bits/stdc++.h>
using namespace std;

void permut(string curr,string org){
    if(org==""){
        cout<<curr<<endl;
        return;
    }
    // cout<<org<<endl;
    for(int i=0;i<org.length();i++){
        char ch=org[i];
        // curr=curr+ch;
        string left=org.substr(0,i);
        string right=org.substr(i+1);
        permut(curr+ch,left+right);        
    }
} 


int main(){
    string s="abc";
    permut("",s);
}