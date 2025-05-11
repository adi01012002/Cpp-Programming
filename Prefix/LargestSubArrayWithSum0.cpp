#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={0,15, -2, 2, -8, 1, 7, 10, 23};
    unordered_map<int,int>mp;
    int sum=0;
    int len=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==0)len=i+1;
        if(mp.find(sum)!=mp.end()){
            len=max(len,i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }

    }
    cout<<len<<endl;
}