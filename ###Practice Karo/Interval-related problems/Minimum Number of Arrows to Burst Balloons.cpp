#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>points = {{10,16},{2,8},{1,6},{7,12}};
    int n=points.size();
    sort(points.begin(),points.end(),[](auto&a,auto&b){
        return a[1]<b[1];
    });

    int lastEnd=points[0][0];
    int arrow=1;
    for(int i=0;i<n;i++){
        if(points[i][0]>lastEnd){
            arrow++;
            lastEnd=points[i][1];
        }
    }
    cout<<arrow;
}