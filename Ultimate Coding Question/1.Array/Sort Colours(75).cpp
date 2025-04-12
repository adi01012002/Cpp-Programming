#include<bits/stdc++.h>
using namespace std;
void sortColor(vector<int>&nums){
    vector<int>ans;
    int n=nums.size();
    int i=0;
    int mid=0;
    int e=n-1;
    while (mid<=e){
        if(nums[mid]==0){    // i ensures that till i 0 is maintained
            swap(nums[i],nums[mid]);
            i++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[e]);
            e--;
        }  
    }
}
int main(){
    vector<int>nums={2,0,2,1,1,0};
    sortColor(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}