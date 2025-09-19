#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{1,2,3, -2, 5};
    unordered_map<int,int>mp;
    int Psum=0;
    int count=0;
    int k=5;
    for(int i=0;i<v.size();i++){
        Psum+=v[i];
        if(Psum==k)count++;
        if(mp.find(Psum-k)!=mp.end()){
            count+=mp[Psum-k];
        }
        mp[Psum]++;
    }
    cout<<count<<endl;
}

