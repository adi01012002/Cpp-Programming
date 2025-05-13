#include<bits/stdc++.h>
using namespace std;
int StairCase(int n){
    if(n==1)return 1;
    if(n==2)return 2;
    return StairCase(n-1)+StairCase(n-2);
}

vector<int>dp;
int StairCaseMemo(int n){
    // if(n==0)return 0;
    if(n==1)return 1;
    if(n==2)return 2;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=StairCaseMemo(n-1)+StairCaseMemo(n-2);
}



// int fiboMemo(int n){
//     if(n==0)return n;
//     if(n==1||n==2)return 1;
//     if(dpm[n]!=-1)return dpm[n];
//     return dpm[n]=fiboMemo(n-1)+fiboMemo(n-2);
// }
int main(){
    int n=5;
    cout<<StairCase(n)<<endl;
    dp.resize(n+1,-1);
    cout<<StairCaseMemo(n);
}