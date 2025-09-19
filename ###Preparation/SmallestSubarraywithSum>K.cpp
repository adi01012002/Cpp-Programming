#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {2,3,1,2,4,3};
    int k = 7;

    int sum=0;
    int left=0;
    int right=0;
    int MinLen=INT_MAX;
    while(right<nums.size()){
        sum+=nums[right];
        while(sum>k){
            MinLen=min(MinLen,right-left+1);
            sum-=nums[left];
            left++;
        }
        while(sum==k){
            MinLen=min(MinLen,right-left+1);
            sum-=nums[left];
            left++;
        }
        right++;
    }
    cout<<MinLen<<endl;
}