#include<bits/stdc++.h>
using namespace std;

int help(int i,int j){
    if(i==0&&j==0)return 1;
    if(i<0||j<0)return 0;
    int up=help(i-1,j);
    int left=help(i,j-1);
    return up+left;
}


vector<vector<int>>dp;


int help1(int i,int j){
    if(i==0&&j==0)return 1;
    if(i<0||j<0)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int up=help1(i-1,j);
    int left=help1(i,j-1);
    return dp[i][j]=up+left;
}




int main(){
    dp.resize(3,vector<int>(3,-1));
    cout<<help1(2,2);
}