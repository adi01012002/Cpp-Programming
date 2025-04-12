#include<bits/stdc++.h>
using namespace std;
int main(){
    int target = 10;
    vector<int>nums = {1,2,4,6,3,4,3};
    int i=0;
    int j=0;
    int sum=0;
    int len=-1;
    int minLen=INT_MAX;
    while(j<nums.size()){
        sum+=nums[j];
        while(sum>=target){
            len=j-i+1;
            minLen=min(minLen,len);
            sum-=nums[i];
            i++;
        }
        j++;
    }
    if(minLen==INT_MAX) cout<<0;
    else cout<<minLen;
}