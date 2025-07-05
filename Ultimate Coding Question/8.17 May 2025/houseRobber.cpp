#include<bits/stdc++.h>
using namespace std;


int houseRec(vector<int>v,int idx){
    if(idx==0)return v[idx];

    if(idx<0)return 0;
     int rob=v[idx]+houseRec(v,idx-2);
     int not_rob=0+houseRec(v,idx-1);
     return max(rob,not_rob);
}

vector<int>dpm;
int houseMemo(vector<int>v,int idx){
    if(idx==0)return v[idx];
    if(idx<0)return 0;
    if(dpm[idx]!=-1)return dpm[idx];
    int rob=v[idx]+houseMemo(v,idx-2);
    int not_rob=0+houseMemo(v,idx-1);
    return dpm[idx]=max(rob,not_rob);
}

vector<int>dpt;
int houseTda(vector<int>v){

    int n=v.size();
    for(int i=1;i<n;i++){
        int rob=v[i];
        if(i>1){
            rob=rob+dpt[i-2];
        }
        int not_rob=dpt[i-1];
        dpt[i]=max(rob,not_rob);
    }
    return dpt[n-1];
}
int main(){
    vector<int>v={5,5+10,10,100,10,5};
    int n=v.size();
    cout<<houseRec(v,n-1)<<endl;
    dpm.resize(n,-1);
    cout<<houseMemo(v,n-1)<<endl;
    dpt.resize(n,0);
    cout<<houseTda(v)<<endl;
}