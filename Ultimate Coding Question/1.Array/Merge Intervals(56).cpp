#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>merge(vector<vector<int>>&v){
   sort(v.begin(),v.end());
    vector<vector<int>>merge;
    int n=v.size();
    merge.push_back(v[0]);
    for(int i=1;i<n;i++){
        // vector<int>back=merge.back(); This Methode does not work ; 
        if(merge.back()[1]>=v[i][0]){
            merge.back()[1]=max(merge.back()[1],v[i][1]);
        }
        else{
            merge.push_back(v[i]);
        }
    }
    return merge;

    // sort(intervals.begin(),intervals.end());
    // vector<vector<int>>merge;
    // merge.push_back(intervals[0]);
    // for(int i=1;i<intervals.size();i++){
    //     if(merge.back()[1]>=intervals[i][0]){
    //         merge.back()[1]=max(merge.back()[1],intervals[i][1]);
    //     }
    //     else{
    //         merge.push_back(intervals[i]);
    //     }
    // }

    // return merge;
}
int main(){
    vector<vector<int>>v={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>>ans=merge(v);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}