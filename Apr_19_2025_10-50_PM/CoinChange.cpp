#include<bits/stdc++.h>
using namespace std;
int CoinChangeRec(vector<int>coins,int amount){
    if(amount==0)return 0;
    if(amount<0)return INT_MAX;
    int res=INT_MAX;
    for(int coin:coins){
        int sub=CoinChangeRec(coins,amount-coin);
        if(sub!=INT_MAX){
            res=min(res,1+sub);
        }
    }
    return res;
}

vector<int>dpm;
int CoinChangeMemo(vector<int>coins,int amount){
    if(amount==0)return 0;
    if(amount<0)return INT_MAX;
    if(dpm[amount]!=-1)return dpm[amount];
    int res=INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(coins[i]<=amount){
        int sub=CoinChangeMemo(coins,amount-coins[i]);
        if(sub!=INT_MAX){
            res=min(res,sub+1);
        }
    }
    }
    return dpm[amount] = res;
}

vector<int>dpt;
int CoinChangeTdp(vector<int>coins,int amount){
    dpt[0]=0;
    for(int i=1;i<=amount;i++){
        for(int coin:coins){
            if(i>=coin && dpt[i - coin] != INT_MAX){
                dpt[i]=min(dpt[i],dpt[i-coin]+1);
            }
        }
    }
    return dpt[amount]==INT_MAX?-1:dpt[amount];
}

int main(){
    vector<int>v={2,3,4};
    int amount=33;

    cout<<CoinChangeRec(v,amount);

    dpm.resize(amount+1,-1);
    cout<<endl<<CoinChangeMemo(v,amount)<<endl;

    dpt.resize(amount+1,INT_MAX);
    cout<<CoinChangeTdp(v,amount)<<endl;
}