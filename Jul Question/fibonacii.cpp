#include<bits/stdc++.h>
using namespace std;
vector<int>dp;
int fibo(int n){
    if(n<=2)return dp[n-1]=1;
    if(dp[n-1]!=-1)return dp[n-1];
    return dp[n-1]=fibo(n-1)+fibo(n-2);
} 

int fibo1(int n){
    if(n<=2)return dp[n]=1;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=fibo(n-1)+fibo(n-2);
} 
// 1 1 2 3 5 8 13
int main(){
    int n=8;
    dp.resize(n+1,-1);
    
    // cout<<fibo(n)<<endl;
    cout<<fibo1(n)<<endl;

    for(int it:dp)cout<<it<<" ";
}