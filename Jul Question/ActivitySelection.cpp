#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>&a,pair<int,int>&b){
    return a.second<b.second;
}
int activitySelection(vector<int>&start,vector<int>&end){
    int n=start.size();
    vector<pair<int,int>>activities;
    for(int i=0;i<n;i++){
        activities.push_back({start[i],end[i]});
    }

    sort(activities.begin(),activities.end(),comp);
    for(int i=0;i<activities.size();i++){
        cout<<activities[i].first<<" "<<activities[i].second<<endl;
    }
    cout<<endl;

    int count=1;
    int LastEnd=activities[0].second;

    for(int i=1;i<n;i++){
        if(activities[i].first>LastEnd){
            count++;
            LastEnd=activities[i].second;
        }
    }
    return count;
}
int main(){
    vector<int>start = {1, 3, 0, 5, 8, 5};
    vector<int>end = {2, 4, 6, 7, 9, 9};
    cout<<activitySelection(start,end);
}