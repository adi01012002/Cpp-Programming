#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&nums1,int m,vector<int>&nums2,int n){
    int n1=nums1.size();
    int n2=nums2.size();
    int i=m-1;
    int j=n-1;
    int k=n1-1;
    while (i>=0&&j>=0)
    {
        if(nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            i--;
            k--;
        }
        else{
            nums1[k]=nums2[j];
            j--;
            k--;
        }
    }
    while (j>=0)
    {
        nums1[k]=nums2[j];
        j--;
        k--;
    }
    
    
}
int main(){
    vector<int>nums1={0};
    int m=0;
    vector<int>nums2={1};
    int n=1;
    merge(nums1,m,nums2,n);
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i]<<" ";
    }
    cout<<endl;
    return 0;
}