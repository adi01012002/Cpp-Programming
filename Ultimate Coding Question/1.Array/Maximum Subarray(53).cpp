#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>nums){
    int maxi=nums[0];
    int Umaxi=nums[0];
    for(int i=1;i<nums.size();i++){
        maxi=max(nums[i],maxi+nums[i]);
        Umaxi=max(Umaxi,maxi);
    }
    return Umaxi;
}

int main(){
    vector<int>nums={5,4,-1,7,8};
    int ans=maxSubArray(nums);
    cout<<ans<<endl;
    return 0;
}