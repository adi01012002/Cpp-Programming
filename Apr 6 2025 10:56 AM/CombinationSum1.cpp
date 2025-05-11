#include<bits/stdc++.h>
using namespace std;
void combination(vector<int>v,int target,vector<int>aux,vector<vector<int>>&res,int idx){
    if(idx==v.size()){
        if(target==0){
            res.push_back(aux);
        }
        return;
    }
    if(v[idx]<=target){
        aux.push_back(v[idx]);
        combination(v,target-v[idx],aux,res,idx);
        aux.pop_back();
    }
    // backtracking
    combination(v,target,aux,res,idx+1);
}
int main(){
    cout<<endl;
    vector<int>v={5,4,2,6};
    int target=6;
    vector<int>aux;
    vector<vector<int>>res;
    combination(v,target,aux,res,0);
    for(int i=0;i<res.size();i++){
        cout<<"[ ";
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
}