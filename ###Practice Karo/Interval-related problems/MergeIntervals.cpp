#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>intervals = {{1,3},{2,6},{8,10},{15,18}};

    vector<vector<int>>merged;

    merged.push_back(intervals[0]);

    for(int i=1;i<intervals.size();i++){
        int lastEnd=merged.back()[1];
        if(intervals[i][0]<lastEnd){
            merged.back()[1]=max(lastEnd,intervals[i][1]);
        }
        else{
            merged.push_back(intervals[i]);
        }
    }

    for(int i=0;i<merged.size();i++){
        cout<<merged[i][0]<<" "<<merged[i][1]<<endl;
    }

}