#include<bits/stdc++.h>
using namespace std;
int NetMaxReward(vector<int>cost,vector<int>reward){
    int n=cost.size();
    vector<int>dp(n+3,0);
    for(int i=n-1;i>=0;i--){
        int NetMax=reward[i]-cost[i];
        dp[i]=max(dp[i+1],NetMax+dp[i+3]);
    }
    return dp[0];
}
int main(){
    vector<int> cost = {3, 2, 7, 10, 1, 5};
    vector<int> reward = {5, 6, 10, 20, 2, 8};
    cout<<NetMaxReward(cost,reward);

}