#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,5,2,7,1,9};
    int k=15;
    int sum=0;
    int count=0;
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==k)count++;
        if(mp.find(sum-k)!=mp.end()){
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    cout<<count;
}