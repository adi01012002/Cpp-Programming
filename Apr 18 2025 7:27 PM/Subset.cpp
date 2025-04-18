#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>v,vector<int>res,int idx){
    if(idx==v.size()){
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
        return;
    }
    res.push_back(v[idx]);
    subset(v,res,idx+1);
    res.pop_back();
    subset(v,res,idx+1);
}
int main(){
    vector<int>v={1,2,3,4,5};
    int n=v.size();
    vector<vector<int>>ans;
    vector<int>res;
    subset(v,res,0);
}