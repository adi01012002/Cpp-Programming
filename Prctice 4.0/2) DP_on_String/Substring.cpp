#include<bits/stdc++.h>
using namespace std;
void substring(string s,int start,int end){
    if(end==s.size())return;
    if(start>end){
        substring(s,0,end+1);
        return;
    }
    cout<<s.substr(start,end-start+1)<<endl;
    substring(s,start+1,end);
}
int main(){
    string s="abcdef";
    substring(s,0,0);
}