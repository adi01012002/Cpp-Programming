#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1, 2, -3, 0, -4, -5};

    // int maxPro=INT_MIN;
    // for(int i=0;i<v.size();i++){
    //     int currPro=1;
    //     for(int j=i;j<v.size();j++){
    //         currPro*=v[j];
    //         maxPro=max(maxPro,currPro);
    //     }
    // }
    // cout<<maxPro<<endl;

    int pre=1,suff=1,ans=INT_MIN;
    int n=v.size();

    for(int i=0;i<v.size();i++){
        if(pre==0)pre=1;
        if(suff==0)suff=1;
        pre*=v[i];
        suff*=v[n-i-1];
        ans=max(ans,max(pre,suff));
    }
    cout<<ans<<endl;

}