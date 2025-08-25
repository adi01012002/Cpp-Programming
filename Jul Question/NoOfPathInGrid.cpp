#include<bits/stdc++.h>
using namespace std;
int path(int i,int j){
    if(i==0&&j==0)return 1;
    if(i<0||j<0)return 0;
    int up=path(i-1,j);
    int left=path(i,j-1);
    return up+left;
}

vector<vector<int>>dp;
int path1(int i,int j){  // Top Down or Memoization
    if(i==0&&j==0)return 1;
    if(i<0||j<0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int up=path1(i-1,j);
    int left=path1(i,j-1);
    return dp[i][j]=up+left;
}

// dp[i][j]=d[i][j-1]+dp[i-1][j]; // for tabulation  bottom up

int main(){
    int n=2;
    int m=2;
    dp.resize(n+1,vector<int>(m+1,-1));
    cout<<path1(n,m)<<endl;

    for(int i=0;i<dp.size();i++){
        for(int j=0;j<dp[i].size();j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}