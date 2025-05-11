#include<bits/stdc++.h>
using namespace std;
int MinJumpRec(vector<int>v,int i){
    if(i>=v.size()-1)return 0;
    int ans=INT_MAX;
    for(int j=i+1;j<=i+v[i];j++){
        int val=MinJumpRec(v,j);
        if(val!=INT_MAX){
            ans=min(ans,1+val);
        }
    }
    return ans;
}
vector<int>dp;
int MinJumpMemo(vector<int>v,int i){
    if(i>=v.size()-1)return 0;
    if(dp[i]!=-1)return dp[i];
    int ans=INT_MAX;
    for(int j=i+1;j<=i+v[i];j++){
        int val=MinJumpMemo(v,j);
        if(val!=INT_MAX) ans=min(ans,val+1);
    }
    return dp[i]=ans;
}
vector<int>dpt;
int MinJumpTdp(vector<int>v){
    int n=v.size();
    dpt[n-1]=0;
    for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<=i+v[i]&&j<n;j++){
            if(dpt[j]!=INT_MAX){
                dpt[i]=min(dpt[i],dpt[j]+1);
            }
        }
    }
    if(dpt[0]==INT_MAX)return -1;
    else return dpt[0];
}
int main(){
    vector<int>v={1, 3, 5};
    // cout<<;
    cout<<MinJumpRec(v,0);
    dp.resize(v.size(),-1);
    cout<<endl;
    cout<<MinJumpMemo(v,0);
    cout<<endl;
    dpt.assign(v.size(), INT_MAX);
    cout<<MinJumpTdp(v)<<endl;
}