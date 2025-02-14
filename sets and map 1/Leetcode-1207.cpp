#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>m;
    unordered_set<int>s;
    vector<int>v={1,2,2,1,1,3};
    int n=v.size();
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    // for(auto it:m){
    //     cout<<it.second<<" ";
    // }
    bool flag=true;
    for(auto it:m){
        int freq=it.second;
        if(s.find(freq)!=s.end()){
            flag=false;
            break;
        }
        else s.insert(freq);
    }
    if(flag)cout<<"There is Unique Number of occurence of Element";
    else cout<<"There is same occurence of any two element";
}