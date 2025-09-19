#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&a,pair<int,int>&b){
    return a.second<b.second;
}


int ActivitySelectionProblem(vector<int>start,vector<int>end){
    vector<pair<int,int>>activities;
    int n=start.size();
    for(int i=0;i<n;i++){
        activities.push_back({start[i],end[i]});
    }

    sort(activities.begin(),activities.end(),comp);

    int count=1;
    int lastEnd=activities[0].second;

    for(int i=1;i<n;i++){
        if(activities[i].first>lastEnd){
            count++;
            lastEnd=activities[i].second;
        }
    }
    return count;
}
int main(){
    vector<int>start = {1, 3, 0, 5, 8, 5};
    vector<int>end = {2, 4, 6, 7, 9, 9};
    // Select the maximum number of activities that don't overlap.

    int ans=ActivitySelectionProblem(start,end);
    cout<<ans<<endl;

}