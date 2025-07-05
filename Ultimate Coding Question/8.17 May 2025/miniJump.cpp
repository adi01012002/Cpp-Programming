#include<bits/stdc++.h>
using namespace std;

int miniJumpRec(vector<int>v,int idx){
    if(idx>=v.size()-1)return 0;
    // if(idx>v.size()-1)return INT_MAX;
    int res=INT_MAX;
    for(int j=idx+1;j<=idx+v[idx];j++){
        int val=miniJumpRec(v,j);
        if(val!=INT_MAX){
            res=min(res,val+1);
        }
    }
    return res;
}

vector<int>dpm;
int miniJumpMemo(vector<int>v,int idx){
    if(idx>=v.size()-1)return 0;
    if(dpm[idx]!=INT_MAX)return dpm[idx];
    int res=INT_MAX;
    for(int i=idx+1;i<=idx+v[idx];i++){
        // cout<<i<<endl;
        int val=miniJumpMemo(v,i);
        if(val!=INT_MAX){
            res=min(res,val+1);
        }
    }
    return dpm[idx]=res;  // dpm[idx] stores the minimum jumps needed from index idx to the end.
}

vector<int>dpt;
int miniJumpTda(vector<int>v){
    int n=v.size();
    dpt[n-1]=0;
    for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<=i+v[i]&&i<n;j++){
            int val=dpt[j];
            if(val!=INT_MAX){
                dpt[i]=min(dpt[i],val+1);
            }
        }
    }
    return dpt[0];
}

int main(){
    vector<int>v={1,2,3};
    cout<<miniJumpRec(v,0)<<endl;
    dpm.resize(v.size(),INT_MAX);
    cout<<miniJumpMemo(v,0)<<endl;
    dpt.resize(v.size(),INT_MAX);
    cout<<miniJumpTda(v);
}