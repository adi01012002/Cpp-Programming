#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,0,0,1,0,1,1};
    for(int i=0;i<v.size();i++) if(v[i]==0)v[i]=-1;
    unordered_map<int,int>mp;
    int sum=0;
    int count=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==0)count++;
        if(mp.find(sum)!=mp.end()){
            count+=mp[sum];
        }
        mp[sum]++;
    }
    cout<<count;
}