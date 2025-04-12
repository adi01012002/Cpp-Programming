#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>&nums){
    int n=nums.size();
    vector<int>pre(n,1);
    vector<int>suff(n,1);
    // pre[0]=nums[0];
    // suff[n-1]=nums[n-1];
    int f=1;
    for(int i=1;i<nums.size();i++){    // 1,2,3,4
        pre[i]=pre[i-1]*nums[i-1];     // 1,1,2,6
    }  
    int j=0;                                // 24,12,4,1                          
    for(j=n-2;j>=-1;j--){           // 24 12 8 6
        // suff[i]=suff[i+1]*nums[i+1];
        pre[j+1]=f*pre[j+1];
        f=f*nums[j+1];
    }
    // pre[j+1]=f*pre[j+1];
    // f=f*nums[j+1];
    // for(int i=0;i<n;i++){ 
    //     pre[i]=pre[i]*suff[i];
    // }
    return pre;
}
int main(){
    vector<int>nums={-1,1,0,-3,3};
    vector<int>ans=productExceptSelf(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";﻿
    }
    cout<<endl;
}