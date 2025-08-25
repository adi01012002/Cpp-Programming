#include<bits/stdc++.h>
using namespace std;

void combination(vector<int>v,vector<int>res,vector<vector<int>>&ans,int idx,int target){
    if(target==0){
        ans.push_back(res);
        return;
    }
    if(idx>=v.size()||target<0)return;
    res.push_back(v[idx]);
    combination(v,res,ans,idx,target-v[idx]);
    res.pop_back();
    combination(v,res,ans,idx+1,target);

}
// int kj=0;
void combination1(vector<int>v,vector<int>res,vector<vector<int>>&ans,int idx,int target){
    if(target==0){
        ans.push_back(res);
        return;
    }
    if(target<0)return;
    for(int i=idx;i<v.size();i++){
        // if (i > idx && v[i] == v[i - 1]) continue; 
        if(v[i]<=target){   // this condition is just for reducing the number of unwanted recursive call if there is no valid point to call further element
            // cout<<kj<<" ";
            // kj++;
            res.push_back(v[i]);
            combination1(v,res,ans,i+1,target-v[i]);
            res.pop_back();
        }

    }
    // combination(v,res,ans,idx+1,target);

}
int main(){
    vector<int>v={2,1,2,2,4,5,3};
    int target=5;
    sort(v.begin(), v.end());
    // remove duplicates
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>res;
    vector<vector<int>>ans;
    combination1(v,res,ans,0,target); 


    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}