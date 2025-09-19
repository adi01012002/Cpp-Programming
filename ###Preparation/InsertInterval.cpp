#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>intervals={{1,3},{8,10},{15,18}};;
    vector<int>newInterval={2,6};
    vector<vector<int>>res;
    int i=0;
    int n=intervals.size();
    while(i<n&&intervals[i][1]<newInterval[0]){
        res.push_back(intervals[i]);
        i++;
    }
    while(i<n&&intervals[i][0]<=newInterval[1]){
        newInterval[0]=min(newInterval[0],intervals[i][0]);
        newInterval[1]=min(newInterval[1],intervals[i][1]);
    }

    

    res.push_back(newInterval);
    i++;
    while(i<n){
        res.push_back(intervals[i]);
        i++;
    }

    for(int i=0;i<res.size();i++){
        cout<<res[i][0]<<res[i][1]<<endl;
    }
}