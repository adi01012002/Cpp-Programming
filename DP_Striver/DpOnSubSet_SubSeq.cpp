#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
//Recursion 
bool help(int idx,vector<int>v,int k){
    // cout<<v[idx]<<" ";
    if(idx<0){
        if(k==0)return true;
        else return false;
    }
    bool take =false;
    if(k>=v[idx]){
        take=help(idx-1,v,k-v[idx]);
    }
    bool not_take=help(idx-1,v,k);
    return take || not_take;
}



// Memoization (Top-Down DP)
vector<vector<int>>dp;
bool help1(int idx,vector<int>v,int k){
    // cout<<v[idx]<<" ";
    if(idx<0){
        if(k==0)return true;
        else return false;
    }
    if(dp[idx][k]!=-1)return dp[idx][k];
    bool take =false;
    if(k>=v[idx]){
        take=help(idx-1,v,k-v[idx]);
    }
    bool not_take=help(idx-1,v,k);
    return dp[idx][k]=take || not_take;
}



int main() {
    int k=4;
    vector<int>v={2,3,1,1};
    int n=v.size();
    dp.resize(n,vector<int>(k+1,-1));
    cout<<boolalpha;
    cout<<help1(n-1,v,k)<<endl;
    return 0;
}