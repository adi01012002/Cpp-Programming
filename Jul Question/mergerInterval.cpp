#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>merge(vector<vector<int>>&inte){
    sort(inte.begin(),inte.end());

    vector<vector<int>>merged;
    merged.push_back(inte[0]);
    for(int i=1;i<inte.size();i++){
        int end=merged.back()[1];
        int st=inte[i][0];
        if(end>st){
            merged.back()[1]=max(merged.back()[1],inte[i][1]);
        }
        else{
            merged.push_back(inte[i]);
        }
    }
    return merged;
}
int main(){
    vector<vector<int>>v={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>>ans=merge(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
}