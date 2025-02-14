#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums={3,2,4};
    int n=nums.size();
    unordered_map<int,int>mp;
    vector<int>ans;
    int target=6;
    for(int i=0;i<n;i++){
        int rem=target-nums[i];
        if(mp.find(rem)!=mp.end()){
            ans.push_back(i);
            ans.push_back(mp[rem]);
        }
        else mp[nums[i]]=i;
    }
    cout<<ans[0]<<" "<<ans[1];
}