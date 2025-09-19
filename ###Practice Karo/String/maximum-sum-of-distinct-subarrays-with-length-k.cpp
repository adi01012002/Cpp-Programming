#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {1,5,4,2,9,9,9};int k = 3;
    int i=0;
    int j=0;
    int maxSum=0;
    int sum=0;
    map<int ,int>mpp;
    while(j<nums.size()){
        sum+=nums[j];
        mpp[nums[j]]++;
        if(mpp.size()>k){
            sum-=nums[i];
            if(mpp[nums[i]]==0)mpp.erase(nums[i]);
            i++;
        }

        if(mpp.size()==k){
            maxSum=max(maxSum,sum);
        }
        j++;
    }
    cout<<maxSum<<endl;


    /////////////////////////////////////////////////////////////////////////////////////////////////


     unordered_map<int, int> mpp;
        int i = 0, j = 0;
        ll result = 0;
        ll sum = 0;

        while (j <= n) {
            if (j - i + 1 > k) {
                sum -= nums[i];
                if(mpp[nums[i]] > 1) {
                    mpp[nums[i]]--;
                } 
                else mpp.erase(nums[i]);
                i++;
            } 
            else {
                if (j != n) {
                    sum += nums[j];
                    mpp[nums[j]] ++;
                }
                j++;
            }
            if (mpp.size() == k)
                result = max(result, sum);
        }
        return result;
}