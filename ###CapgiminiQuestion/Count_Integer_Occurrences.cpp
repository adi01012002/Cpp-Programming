#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,3,4,1,4,5,1,2};
    unordered_map<int,int>mp;

    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    vector<pair<int,int>>items(mp.begin(),mp.end());
    sort(items.begin(),items.end());

    for(auto it:mp){
        cout<<it.first<<" occur "<<it.second<<endl;
    }
}