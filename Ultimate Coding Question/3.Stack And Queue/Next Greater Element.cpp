#include<bits/stdc++.h>
using namespace std;
vector<int>nextGreaterElement(vector<int>nums1,vector<int>nums2){
    unordered_map<int ,int>mp;
    int n=nums2.size();
    mp.insert({nums2[n-1],-1});
    vector<int>ans(nums1.size(),0);
    stack<int>st;
    st.push(nums2[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0&&st.top()<nums2[i])st.pop();
        if(st.size()==0){
            mp.insert({nums2[i],-1});
        }
        else mp.insert({nums2[i],st.top()});
        st.push(nums2[i]);
    }

    for(int i=0;i<nums1.size();i++){
    //    if(mp.find(nums1[i])!=mp.end()){
            ans[i]=mp[nums1[i]];
        // }
    }
    return ans;
}
int main(){
    vector<int>nums1={2,4};
    vector<int>nums2={1,2,3,4};
    vector<int> ans=nextGreaterElement(nums1,nums2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}