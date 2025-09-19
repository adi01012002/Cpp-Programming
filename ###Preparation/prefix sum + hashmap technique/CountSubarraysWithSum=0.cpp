#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1, -1, 2, -2, 3};
    int Prefix=0;
    int count=0;
    mp[0]=1;
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        Prefix+=v[i];
        if(Prefix==0)count++;
        if(mp.find(Prefix)!=mp.end()){
            count+=mp[Prefix];
        }
        mp[Prefix]++;

    }
    cout<<count;
}