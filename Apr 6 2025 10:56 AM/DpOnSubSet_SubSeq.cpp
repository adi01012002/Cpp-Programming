#include<bits/stdc++.h>
using namespace std;
bool SubSetSumEqualToKRec(vector<int>v,int i,int k){
    if(i<0){
        if(k==0)return true;
        else return false;
    }
    bool take=false;
    if(k>=v[i]){
        take=SubSetSumEqualToKRec(v,i-1,k-v[i]);
    }
    bool Not_take=SubSetSumEqualToKRec(v,i-1,k);
    return take||Not_take;
}

vector<vector<int>>dp;
bool SubSetSumEqualToKMemo(vector<int>v,int i,int k){
    if(i<0){
        if(k==0)return true;
        else return false;
    }
    if(dp[i][k]!=-1)return dp[i][k];
    bool take=false;
    if(k>=v[i]){
        take=SubSetSumEqualToKMemo(v,i-1,k-v[i]);
    }
    bool Not_take=SubSetSumEqualToKMemo(v,i-1,k);
    return dp[i][k]=take||Not_take;
}
int main(){
    vector<int>v={2,1,1,1};
    int n=v.size();
    int k=5;
    cout<<boolalpha;
    cout<<SubSetSumEqualToKRec(v,n-1,k)<<endl;
    dp.resize(n,vector<int>(k+1,-1));
    cout<<SubSetSumEqualToKMemo(v,n-1,k)<<endl;
}