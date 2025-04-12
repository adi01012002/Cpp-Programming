#include<bits/stdc++.h>
using namespace std;
void help(string s,int st,int end){
    if(end==s.length())return;
    if(st>end){
        help(s,0,end+1);
        return;
    }
    cout<<s.substr(st,end-st+1)<<endl;
    help(s,st+1,end);
}
int main(){
    string s="abcdesf";
    help(s,0,0);
}