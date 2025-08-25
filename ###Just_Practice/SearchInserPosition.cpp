#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,4,7};
    int x = 6;
    int n=v.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]>=x){
            ans=mid;
            high=mid-1;
            // break;
        }
        // if(v[mid]>x){
        //     high=mid-1;
        // }
        else low=mid+1;
    }
    // cout<<low<<" "<<high;

    cout<<ans;
} 