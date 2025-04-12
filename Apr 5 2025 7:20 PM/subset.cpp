#include<bits/stdc++.h>
using namespace std;
void subsetOfString(string s,string st,int idx){
    // if(idx>s.size())return;
    if(idx==s.size()){
        cout<<st<<endl;
        return;
    }
    subsetOfString(s,st+s[idx],idx+1);
    subsetOfString(s,st,idx+1);
}
void subSetOfVector(vector<int>v,vector<int>c,int idx){
    if(idx==v.size()){
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
        return;
    }
    c.push_back(v[idx]);
    subSetOfVector(v,c,idx+1);
    c.pop_back();
    subSetOfVector(v,c,idx+1);
}
int main(){
    // string s="abc";
    // subsetOfString(s,"",0);
    vector<int>v={1,2,3,4};
    vector<int>c;
    subSetOfVector(v,c,0);

    /// For Subsequence same code , In Subsequence order of element matters
    // while in subset order of element not matter 
}