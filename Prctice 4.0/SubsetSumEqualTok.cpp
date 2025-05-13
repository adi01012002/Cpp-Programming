#include<bits/stdc++.h>
using namespace std;
bool SubSetSumEqualToKRec(vector<int>v,int idx,int k){
    if(idx==v.size()){
        if(k==0)return true;
        else return false;
    }
    bool take=false;
    if(k>=v[idx]){
       take=SubSetSumEqualToKRec(v,idx+1,k-v[idx]);
    }
    bool not_take=SubSetSumEqualToKRec(v,idx+1,k);
    return take||not_take;

}

vector<vector<int>>dpm;
bool SubSetSumEqualToKMemo(vector<int>v,int idx,int k){
    if(idx==v.size()){
        if(k==0)return true;
        else return false;
    }
    if(dpm[idx][k]!=-1)return dpm[idx][k];
    bool take=false;
    if(k>=v[idx]){
        take=SubSetSumEqualToKMemo(v,idx+1,k-v[idx]);
    }
    bool not_take=SubSetSumEqualToKMemo(v,idx+1,k);
    return dpm[idx][k]=take||not_take;
}

vector<vector<bool>>dpt;
bool SubSetSumEqualToKTabu(vector<int>v,int k){
    int n=v.size();
    for(int i=0;i<=n;i++) dpt[i][0]=true;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(v[i]<=k){
                dpt[i][j]=dpt[i-1][j-v[i-1]];
            }
            else {
                dpt[i][j]=dpt[i-1][j];
            }
        }
    }
    return dpt[n][k];
}

int main(){
    vector<int>v={9,4,7,5};
    int k=6;
    int n=v.size();
    cout<<boolalpha<<SubSetSumEqualToKRec(v,0,k)<<endl;
    // dp.resize(n,vector<int>(k+1,-1));
    dpm.resize(n,vector<int>(k+1,-1));
    cout<<SubSetSumEqualToKMemo(v,0,k)<<endl;

    dpt.resize(n+1,vector<bool>(k+1,false));
    cout<<SubSetSumEqualToKTabu(v,k)<<endl;

}