#include<bits/stdc++.h>
using namespace std;

// int findMinArrowShots(vector<vector<int>>& points) {
//     if (points.empty()) return 0;

//     sort(points.begin(), points.end(), [](auto& a, auto& b) {
//         return a[1] < b[1];
//     });

//     int arrows = 1;
//     int end = points[0][1];

//     for (int i = 1; i < points.size(); ++i) {
//         if (points[i][0] > end) {
//             arrows++;
//             end = points[i][1];
//         }
//     }

//     return arrows;
// }


// int merge(vector<vector<int>>&inte){
//     sort(inte.begin(),inte.end());

//     vector<vector<int>>merged;
//     merged.push_back(inte[0]);
//     for(int i=1;i<inte.size();i++){
//         int end=merged.back()[1];
//         int st=inte[i][0];
//         if(end>=st){
//             merged.back()[1]=max(merged.back()[1],inte[i][1]);
//         }
//         else{
//             merged.push_back(inte[i]);
//         }
//     }
//     return merged.size();
// }


vector<vector<int>>merged;
int findArrowShots(vector<vector<int>>&points){
    sort(points.begin(),points.end());
    int n=points.size();
    merged.push_back(points[0]);
    for(int i=1;i<n;i++){
        int end=merged.back()[1];
        int st=points[i][0];
        if(st<=end){
            merged.back()[1]=max(merged.back()[1],points[i][1]);
        }
        else{
            merged.push_back(points[i]);
        }
    }
    return merged.size();
}

int main(){
    vector<vector<int>>points={{1,2},{3,4},{0,6},{5,7},{8,9},{5,9}};
    cout<<findArrowShots(points)<<endl;
    // cout<<findMinArrowShots(points)<<endl;
    // cout<<merge(points)<<endl;

    for(int i=0;i<merged.size();i++){
        cout<<merged[i][0]<<" "<<merged[i][1]<<endl;
    }
}