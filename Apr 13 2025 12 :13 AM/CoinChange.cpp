#include<bits/stdc++.h>
using namespace std;

int CoinChangeRec(vector<int>coins,int amount){
    if(amount==0)return 0;
    if(amount<0)return INT_MAX;
    int res=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int sub=CoinChangeRec(coins,amount-coins[i]);
        if(sub!=INT_MAX){
            res=min(res,1+sub);
        }
    }
    return res;
}


vector<int>dp;
int CoinChangeMemo(vector<int>coins,int amount){
    if(amount==0)return 0;
    if(amount<0)return INT_MAX;
    if(dp[amount]!=-1)return dp[amount];

    int res=INT_MAX;
    for(int coin:coins){
        int sub=CoinChangeMemo(coins,amount-coin);
        if(sub!=INT_MAX){
            res=min(res,sub+1);
        }
    }
    return res;
}





vector<int>dp;
int CoinChangeTdp(vector<int>coins,int amount){
    dp[0]=0;
    for(int i=1;i<=amount;i++){
        for(int coin:coins){
            if(i-coin>=0&& dp[i-coin]!=INT_MAX){
                dp[i]=min(dp[i],dp[i-coin]+1);
            }
        }
    }

    return dp[amount]==INT_MAX?-1:dp[amount];
}
int main(){
    vector<int>coins = {1, 3, 4};
    int amount = 6;
    // dp.resize(amount+1,-1);
    // cout<<CoinChange(coins,amount);

    dp.resize(amount+1,INT_MAX);
    cout<<CoinChange(coins,amount);  // Change Function Name accordingly

}