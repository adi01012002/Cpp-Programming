#include<iostream>
#include<vector>
using namespace std;
int factRec(int n){
    if(n==0||n==1)return 1;
    return n*factRec(n-1);
}
vector<int>dp;
int factMemo(int n){
    if(n==0||n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    return dp[n]=n*factMemo(n-1);
}

vector<int>dp1;
int factTdp(int n){
    for(int i=1;i<n;i++){
        dp1[i]=(i+1)*dp1[i-1];
    }                                //1  2 6 24 
    return dp1[n-1];
}
int main(){
    int n=4;
    cout<<factRec(n);
    cout<<endl;
    dp.resize(n+1,-1);
    cout<<factMemo(n);
    cout<<endl;
    dp1.resize(n,1);
    cout<<factTdp(n);
    cout<<endl;
    // for(int el : dp1)cout<<el<<" ";

}