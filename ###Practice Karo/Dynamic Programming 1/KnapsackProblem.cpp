#include<bits/stdc++.h>
using namespace std;

int knapsack(vector<int>&val,vector<int>&w,int n,int C){
    vector<int>dp(C+1,-10000000);

    dp[0]=0;

    for(int i=0;i<n;i++){
        for(int j=C;j>=w[i];j--){
            cout<<dp[j-w[i]]<<" for "<<i<<" and "<<j<<" and weight "<<w[i]<<endl;
            dp[j]=max(dp[j],dp[j-w[i]]+val[i]);
        }
    }

    return dp[C];
}

int main(){
    vector<int>val={2,1,2};
    vector<int>w={5,2,3};
    int C=5;
    int n=val.size();

    cout<<knapsack(val,w,n,C);
}