#include<bits/stdc++.h>
using namespace std;

int RobberRec(vector<int>v,int idx){
    if(idx==0)return v[idx];
    if(idx<0)return 0;
    int take=v[idx]+RobberRec(v,idx-2);
    int not_take=RobberRec(v,idx-1);
    return max(take,not_take);
}

vector<int>dpm;
int RobberMemo(vector<int>v,int idx){
    if(idx==0)return v[idx];
    if(idx<0)return 0;
    if(dpm[idx]!=-1)return dpm[idx];
    int take=v[idx]+RobberMemo(v,idx-2);
    int not_take=RobberMemo(v,idx-1);
    return max(take,not_take);
}

vector<int>dpt;
int RobberTda(vector<int>v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int take=v[i];
        if(i>1){
            take=take+v[i-2];
        }
        int not_take=v[i-1];
        dpt[i]=max(take,not_take);
    }
    return dp[n-1];
}

int main(){
    vector<int>v={5,5,10,100,10,5};
    cout<<RobberRec(v,v.size()-1)<<endl;
}