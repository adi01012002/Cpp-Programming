#include<bits/stdc++.h>
using namespace std;
int factRecu(int n){
    if(n==0)return 1;
    return n*factRecu(n-1);
}

int factIter(int n){
    int j=1;
    for(int i=2;i<=n;i++){
        j=j*i;
    }
    return j;
}

vector<int>dpm;
int factMemo(int n){
    if(n==0||n==1)return 1;
    if(dpm[n-1]!=-1)return dpm[n-1];
    return dpm[n-1]=n*factMemo(n-1);
}

vector<int>dpt;    // currently size of dpt is n+1 but we can also solve this by taking n as size
int factTabu(int n){  //  but multiply i+1 instead of i in line no 27 
    // dpt[1]=1;
    for(int i=1;i<=n;i++){
        dpt[i]=dpt[i-1]*i;
    }
    return dpt[n];

}
int main(){
    int n=5;
    cout<<factRecu(n)<<endl;
    cout<<factIter(n)<<endl;
    dpm.resize(n,-1);
    cout<<factMemo(n)<<endl;
    dpt.resize(n+1,1);    
    cout<<factTabu(n)<<endl;
    // for(auto it :dpm){
    //     cout<<it<<" ";
    // }
    



}