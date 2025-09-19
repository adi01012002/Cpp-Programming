#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>intervals = {{1,3},{6,9}};
    vector<int>newInterval = {2,5};

    vector<vector<int>>result;
    int n=intervals.size();
    int i=0;
    // jab tak hamare current interval ka end newInterval ke start se chota hai
    while(i<n && intervals[i][1]<newInterval[0]){
        result.push_back(intervals[i++]);
    }

    // merge new Interval

    while(i<n && intervals[i][0]<=newInterval[1]){
        newInterval[0]=min(newInterval[0],intervals[i][0]);
        newInterval[1]=max(newInterval[1],intervals[i][1]);
        i++;
    }
    result.push_back(newInterval);

    while(i<n){
        result.push_back(intervals[i++]);
    }

    for(int i=0;i<result.size();i++){
        cout<<result[i][0]<<" "<<result[i][1]<<endl;
    }

}