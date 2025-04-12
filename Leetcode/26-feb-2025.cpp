#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,-5,1,-4,3,-2};
    int n=v.size();
    int aM=v[0];
    int asM=v[0];
    for(int i=1;i<n;i++){
        aM=max(v[i],aM+v[i]);
        asM=max(asM,aM);
    }
    int bM=v[0];
    int bsM=v[0];
    for(int i=1;i<n;i++){
        bM=min(v[i],bM+v[i]);
        bsM=min(bsM,bM);
    }
    cout<<asM<<" "<<bsM;
}