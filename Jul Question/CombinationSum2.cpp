#include<bits/stdc++.h>
using namespace std;

void combinationSum2(vector<int>&v,vector<int>&path,vector<vector<int>>&res,int target,int idx){
    if(target==0){
        res.push_back(path);
        return;
    }
    if(target<0)return 0;
    for(int i=idx;i<v.size();i++){
        if(i>idx && v[i]==v[i-1])continue;
        if(v[i]>target)break;
        path.push_back(v[i]);
        combinationSum2(v,path,res,target-v[i],i+1);
        path.pop_back();
    }

} 




int main(){
    vector<int>v={10,1,2,7,6,1,5};
    int target=8;
    sort(v.begin(),v.end());
    vector<int>path;
    vector<vector<int>>res;
    combinationSum2(v,path,res,target,0);

    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}