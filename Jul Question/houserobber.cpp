#include<bits/stdc++.h>
using namespace std;
int robber(vector<int>&v,int idx){
    if(idx==0)return v[idx];
    if(idx<0)return 0;
    int rob=v[idx]+robber(v,idx-2);
    int not_rob=0+robber(v,idx-1);
    return max(rob,not_rob);
}


vector<int>dp;
int robber1(vector<int>&v,int idx){
    if(idx==0)return v[idx];
    if(idx<0)return 0;
    if(dp[idx]!=-1)return dp[idx];
    int rob=v[idx]+robber1(v,idx-2);
    int not_rob=0+robber1(v,idx-1);
    return dp[idx]=max(rob,not_rob);
}


int main(){
    vector<int>v={5,5,10,100,10,5};
    int n=v.size();
    dp.resize(n,-1);
    // cout<<robber1(v,n-1)<<endl;
    // for(int it:dp)cout<<it<<" ";

    // dp[0]=v[0];
    for(int i=0;i<n;i++){
        int take=v[i];
        if(i>1){
            take=take+dp[i-2];
        }
        int not_take=dp[i-1];
        dp[i]=max(take,not_take);
    }
    cout<<dp[n-1]<<endl;
    for(int it:dp)cout<<it<<" ";


}