#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>s,vector<int>&v,int idx){
    if(idx==v.size()){
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subset(s,v,idx+1);
    s.push_back(v[idx]);
    subset(s,v,idx+1);
}
int main(){
    vector<int>v={1,2,3};
    vector<int>s;
    subset(s,v,0);
}