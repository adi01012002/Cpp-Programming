#include<bits/stdc++.h>
using namespace std;
// Brute Force Approach
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>ans;
    int n=nums.size();
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
        
}

// Optimized Approach
vector<int>TwoSum(vector<int>&nums,int target){
    vector<int>ans;
    int n=nums.size();
    unordered_map<int ,int>mp;
    for(int i=0;i<n;i++){
        int rem=target-nums[i];
        if(mp.find(nums[i])!=mp.end()){ // nums[i] <=> rem
            ans.push_back(i);
            ans.push_back(mp[nums[i]]); // nums[i] <=> rem
        }
        else {
            mp[rem]=i;  // rem <=> nums[i]
        }
    }
    return ans;
}
int main(){
    vector<int>nums={3,2,4};
    int target=6;
    vector<int>ans=TwoSum(nums,target);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}