#include<bits/stdc++.h>
using namespace std;
// [Naive Approach] – Using Recursion – O(n ^ n) Time and O(n) Space
int minJumpReq(int i ,vector<int>v){
    if(i>=v.size()-1)return 0;
    int ans=INT_MAX;
    for(int j=i+1;j<=i+v[i];j++){
        int val=minJumpReq(j,v);
        if(val!=INT_MAX){
            ans=min(ans,1+val);
        }
    }
    return ans;
}
// [Expected Approach – 1] – Using Top-Down DP (Memoization) – O(n^2) Time and O(n) Space
vector<int>dp;
int minJumpReq1(int i ,vector<int>v){
    if(i==v.size()-1)return 0;
    if(dp[i]!=-1)return dp[i];
    int ans=INT_MAX;
    for(int j=i+1;j<=i+v[i];j++){    // current index se lekar us index ke value 
        int val=minJumpReq1(j,v); // tak ke steps ke possibility ko check karenge 
        if(val!=INT_MAX){            // agar path exist karega to ye number of steps return 
            ans=min(ans,1+val);      //  karega last tak pahuchane tak
        }
    }
    return dp[i]=ans;
}
// [Expected Approach – 2] – Using Bottom-Up DP (Tabulation) – O(n^2) Time and O(n) Space
int minJumpReq2(vector<int>v,vector<int>&dp){
    int n=v.size();
    dp.assign(v.size(), INT_MAX);
    dp[n-1]=0;
    for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<=i+v[i]&&j<n;j++){
            if(dp[j]!=INT_MAX){
                dp[i]=min(dp[i],1+dp[j]);
            }
        }
    }
    if (dp[0] == INT_MAX)return -1;
    return dp[0];
}
int main(){
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    dp.resize(arr.size(),-1);
    cout << minJumpReq1(0,arr);
    cout<<endl;
    for(int i=0;i<dp.size();i++){
        cout<<dp[i]<<" ";
    }
    return 0;

}