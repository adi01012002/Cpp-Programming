#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>mp;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<vector<int>>nums1 = {{1,2},{2,3},{4,5}};
    vector<vector<int>>nums2 = {{1,4},{3,2},{4,1}};
    for(auto it : nums1){
        int id=it[0];
        int val=it[1];
        mp.insert({id,val});
    }
    for(auto it:nums2){
        int id=it[0];
        int val1=it[1];
        if(mp.find(id)!=mp.end()){
            int val2=mp[id];
            pq.push({id,val1+val2});
            mp.erase(id);
        }
        else{
            pq.push({id,val1});
        }
    }
    if(mp.size()!=0){
        for(auto it :mp){
            pq.push(it);
        }
    }
    vector<vector<int>>ans;
    while(!pq.empty()){
        auto it=pq.top();
        // cout<<it.first<<" "<<it.second<<endl;
        vector<int>v;
        v.push_back(it.first);
        v.push_back(it.second);
        ans.push_back(v);
        pq.pop();
    }


}