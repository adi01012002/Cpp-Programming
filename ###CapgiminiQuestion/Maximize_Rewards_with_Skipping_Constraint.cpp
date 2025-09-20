#include<bits/stdc++.h>
using namespace std;
int Maxreward(vector<int>reward){
    int n=reward.size();
    vector<int>dp(n+3,0);
    for(int i=n-1;i>=0;i--){
        dp[i]=max(dp[i+1],reward[i]+dp[i+3]);
    }
    return dp[0];
}
int main(){
int n = 6;
vector<int> cost = {3, 2, 7, 10, 1, 5};
vector<int> reward = {5, 6, 10, 20, 2, 8};
cout<<Maxreward(reward);

}