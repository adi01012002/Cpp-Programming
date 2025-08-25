#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v= {3, 5, 8, 15, 19};
    int x = 9;
    int lo=0;
    int hi=v.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(v[mid]>=x){
            // cout<<v[mid];
            ans=mid;
            hi=mid-1;
            // break;
        }
        // else if(v[mid]>x){
        //     hi=mid-1;
        // }
        else{
            lo=mid+1;
            // cout<<lo<<"eed";
        }

    }
    if(ans!=-1)cout<<v[ans];
    // else cout<<v[lo];

    // cout<<ans;
}
