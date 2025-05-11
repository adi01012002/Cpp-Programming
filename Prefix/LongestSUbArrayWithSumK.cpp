#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,5,2,7,1,9};
    int k=15;
    int sum=0;
    int len=0;
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==k)len=i+1;
        if(mp.find(sum-k)!=mp.end()){
            len=max(len,i-mp[sum-k]);
        }
        else if(mp.find(sum)==mp.end()){   /// We are interested in first occurence of every prifix sum 
            mp[sum]=i;                    /// else we can loose longest subarray
        }
        // else{
        //     mp[sum]=i;    //  by this we can again update prefix sum 
        // }                 // which is wrong
    }
    cout<<len;
}