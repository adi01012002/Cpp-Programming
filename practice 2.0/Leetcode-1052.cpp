#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>c={9,10,4,5};
    vector<int>g={1,0,1,1};
    int m=1;
    int cl=0;
    for(int i=0;i<m;i++){
        if(g[i]==1){
            cl+=c[i];
        }
    }
    // cout<<ml;
    int i=1;
    int j=m;
    int ml=cl;
    int idx=0;
    while(j<g.size()){
        if(g[j]==1)cl+=c[j];
        if(g[i-1]==1)cl-=c[i-1];
        if(ml<cl){
            ml=cl;
            idx=i;
        }
        i++;
        j++;
    }
    // cout<<ml<<" "<<idx;
    // FIlling zeros in the grampy array 
    for(int i=idx;i<idx+m;i++){
        g[i]=0;
    }
    // Sum of satisfaction 
    int ans=0;
    for(int i=0;i<g.size();i++){
        if(g[i]==0)ans+=c[i];
    }
    cout<<ans;

}