#include<bits/stdc++.h>
using namespace std;

int miniJumpRec(vector<int>v,int i){
    if(i>=v.size())return 0;
    int res=INT_MAX;
    for(int j=i+1;j<=i+v[i];j++){
        int val=miniJumpRec(v,j);
        if(val!=INT_MAX){
            res=min(res,1+val);
        }
    }
    return res;
}

vector<int>dpm;
int miniJumpMemo(vector<int>v,int i){
    if(i>=v.size()-1)return 0;
    if(dpm[i]!=-1)return dpm[i];
    int res=INT_MAX;
    for(int j=i+1;j<=i+v[i];j++){
        int val=miniJumpMemo(v,j);
        if(val!=INT_MAX){
            res=min(res,val+1);
        }
    }
    return res;
} 


vector<int>dpt;
int miniJumpzTda(vector<int>v){
    int n=v.size();
    dpt[n-1]=0;
    for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<=i+v[i];j++){
            if(dpt[j]!=INT_MAX){
                dpt[i]=min(dpt[i],dpt[j]+1);
            }
        }
    }
    return dpt[0];
}


int main(){
    vector<int>v={1,3,5};
    int n=v.size();
    cout<<miniJumpRec(v,0)<<endl;
    dpm.resize(n,-1);
    cout<<miniJumpMemo(v,0)<<endl;
    dpt.resize(n,INT_MAX);
    cout<<miniJumpzTda(v)<<endl;
}