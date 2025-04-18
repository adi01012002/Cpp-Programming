#include<bits/stdc++.h>
using namespace std;

// int knapsack(int i,int W,vector<int>v,vector<int>weight){
//     if(i==0||W==0)return 0;
//     if(weight[i-1]<=W){
//         return max(
//             v[i-1]+knapsack(i-1,W-weight[i-1],v,weight),knapsack(i-1,W,v,weight)
//         );
//     }
//     else return knapsack(i-1,W,v,weight);
// }


// vector<vector<int>>dp;
// int knapsack(int i,int W,vector<int>v,vector<int>weight){
//     if(i==0||W==0)return 0;
//     if(dp[i][W]!=-1)return dp[i][W];
//     if(weight[i-1]<=W){
//         return dp[i][W]=max(
//             v[i-1]+knapsack(i-1,W-weight[i-1],v,weight),  // included
//             knapsack(i-1,W,v,weight)                      // excluded
//         );
//     }
//     else return dp[i][W]=knapsack(i-1,W,v,weight);
// }


vector<vector<int>>dp;
int knapsack(int W,vector<int>v,vector<int>weight){
    int n=weight.size();
    for(int i=1;i<=n;i++){
        for(int w=0;w<=W;w++){
            if(weight[i-1]<=w){
                dp[i][w]=max(
                    v[i-1]+dp[i-1][w-weight[i-1]], // include
                    dp[i-1][w]                     // exclude
                );
            }
            else {
                dp[i][w]=dp[i-1][w];
            }
        }
    }
    return dp[n][W];
}
int main(){
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {1, 4, 5, 7};
    int W = 7;
    int n = wt.size();
    dp.resize(n+1,vector<int>(W+1,0));
    cout<<knapsack(W,val,wt);
}