#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int>&v,int amount){
    int res=INT_MAX;
    if(amount==0)return 0;
    if(amount<0)return INT_MAX;
    for(int i=0;i<v.size();i++){
        int count=coinChange(v,amount-v[i]);
        if(count!=INT_MAX){
            res=min(res,1+count);
        }
    }
    return res;
}
int f(int idx,int target, vector<int>&coins){
    if(target<0)return INT_MAX;
    if(target==0)return 0;
    if(idx<0)return INT_MAX;
    int take=INT_MAX;
    if(coins[idx]<=target){
        int temp=f(idx,target-coins[idx],coins);
        if(temp!=INT_MAX){
            take=temp+1;
        }
    }
    int not_take=f(idx-1,target,coins);
    return min(take,not_take);
}

int main(){
    vector<int>v={9,5,6,1};
    int amount=11;

    cout<<coinChange(v,amount)<<endl;
    cout<<f(v.size()-1,amount,v);
}