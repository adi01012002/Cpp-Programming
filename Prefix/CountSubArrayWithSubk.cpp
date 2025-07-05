#include<bits/stdc++.h>
using namespace std;

int check(vector<int>v,int k){
    int sum=0;
    int count=0;
    unordered_map<int,int>mp;
    int pre=0;
    for(int i=0;i<v.size();i++){
        pre=pre+v[i];
        v[i]=pre-k;
    }
    mp[0] = 1;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==0){
            count++;
            cout<<"f";
        }
        if(mp.find(sum)!=mp.end()){
            count+=mp[sum];
            cout<<"hus";
        }
        mp[sum]++;
    }
    return count;
}

    // for(int i=0;i<v.size();i++){
    //     sum+=v[i];
    //     if(sum==k)count++;
    //     if(mp.find(sum)!=mp.end()){
    //         count+=mp[sum];
    //     }
    //     mp[sum]++;
    // }

int main(){
    vector<int>v={10,5,2,7,1,9};
    int k=15;
    int sum=0;
    int count=0;
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum==k)count++;
        if(mp.find(sum-k)!=mp.end()){
            count+=mp[sum-k];
        }
        mp[sum]++;
    }
    cout<<count<<endl;
    cout<<check(v,15)<<endl;
}