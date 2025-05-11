#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,0,0,1,0,1,1};
    for(int i=0;i<v.size();i++){
        if(v[i]==0)v[i]=-1;
    }
    int sum=0;
    int len=0;
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==0)len=i+1;
        if(mp.find(sum)!=mp.end()){
            len=max(len,i-mp[sum]);
        }else{
            mp[sum]=i;
        }
    }
    cout<<len;
}