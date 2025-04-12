#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void combinationalSum(vector<int>&v,int x,vector<int>c,vector<vector<int>>&ans,int idx){
    if(x==0){
        ans.push_back(c);
        return;
    }
    if(idx>=v.size()||x<0)return;
    c.push_back(v[idx]);
    combinationalSum(v,x-v[idx],c,ans,idx);
    c.pop_back();
    combinationalSum(v,x,c,ans,idx+1);
}
int main(){ 
    vector<int>v={2,4,5,3,4,3,2,4,5,3,2,2,3,2,3,5,5};
    //2,4,5,3
    sort(v.begin(), v.end());
    // remove duplicates
    v.erase(unique(v.begin(), v.end()), v.end());

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    vector<int>c;
    vector<vector<int>>ans;
    combinationalSum(v,8,c,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}