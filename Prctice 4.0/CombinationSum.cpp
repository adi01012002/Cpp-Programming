#include<bits/stdc++.h>
using namespace std;



void combinationSum1(vector<int>v,vector<int>res,vector<vector<int>>&ans,int target,int idx){
    if(target==0){
        ans.push_back(res);
        return;
    }
    if(idx>=v.size()||target<0)return;
    res.push_back(v[idx]);
    combinationSum1(v,res,ans,target-v[idx],idx);
    res.pop_back();
    combinationSum1(v,res,ans,target,idx+1);
}



void combinationSum2(vector<int>v,vector<int>res,vector<vector<int>>&ans,int target,int idx){
    if(idx==v.size()){
        if(target==0){
            ans.push_back(res);
        }
        return;
    }
    if(v[idx]<=target){
        res.push_back(v[idx]);
        combinationSum2(v,res,ans,target-v[idx],idx);
        res.pop_back();
    }
    combinationSum2(v,res,ans,target,idx+1);
}


void combinationSum3(vector<int>v,vector<int>res,vector<vector<int>>&ans,int target,int idx){
    if(target==0){
        ans.push_back(res);
        return;
    }
    for(int i=idx;i<v.size();i++){
        // if(target<0)return;
        if(v[i]<=target){
            res.push_back(v[i]);
            combinationSum3(v,res,ans,target-v[i],idx);
            res.pop_back();
        }
    }
}

void print(vector<vector<int>>ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    vector<int>v={2,4,5,6};
    int target=6;
    vector<int>res;
    vector<vector<int>>ans;
    print(ans);
    res.clear();
    ans.clear();
    cout<<"combinationSum1"<<endl;
    combinationSum1(v,res,ans,target,0);
    print(ans);
    res.clear();
    ans.clear();
    cout<<"combinationSum2"<<endl;
    combinationSum2(v,res,ans,target,0);
    print(ans);
    res.clear();
    ans.clear();
    sort(v.begin(),v.end());
    cout<<"combinationSum3"<<endl;
    combinationSum3(v,res,ans,target,0);
    print(ans);
    res.clear();
    ans.clear();


}