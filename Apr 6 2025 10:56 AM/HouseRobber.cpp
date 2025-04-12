#include<bits/stdc++.h>
using namespace std;


int RobberRec(vector<int>v,int idx){
    if(idx==0)return v[idx];
    if(idx<0)return 0;
    int rob=v[idx]+RobberRec(v,idx-2);
    int Not_rob=RobberRec(v,idx-1);
    return max(rob,Not_rob);
}


vector<int>dp1;
int RobberMemo(vector<int>v,int i){
    if(i==0)return v[i];
    if(i<0)return 0;
    if(dp1[i]!=-1)return dp1[i];
    int rob=v[i]+RobberMemo(v,i-2);
    int Not_rob=RobberMemo(v,i-1);
    return dp1[i]=max(rob,Not_rob);
}

vector<int>dp2;
int RobberTab(vector<int>v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int take=v[i];
        if(i>1){
            take=take+dp2[i-2];
        }
        int Not_take=dp2[i-1];
        dp2[i]=max(take,Not_take);
    }
    return dp2[n-1];
}


int main(){
    vector<int>v={5,5,10,100,10,5};
    cout<<RobberRec(v,v.size()-1)<<endl;
    dp1.resize(v.size(),-1);
    cout<<RobberMemo(v,v.size()-1)<<endl;
    dp2.resize(v.size(),0);
    cout<<RobberTab(v)<<endl;

}