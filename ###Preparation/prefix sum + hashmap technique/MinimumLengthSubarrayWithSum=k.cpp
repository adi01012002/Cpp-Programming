#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2, 3, 1, 2, 4, 3};
    int k=7;
    int Psum=0;
    int Len=INT_MAX;
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        Psum+=v[i];
        if(Psum==k)Len=i+1;
        if(mp.find(Psum-k)!=mp.end()){
            int j=mp[Psum-k];
            Len=min(Len,i-j);
        }
        if(mp.find(Psum)==mp.end()){
            mp[Psum]=i;
        }
    }
    cout<<Len<<endl;
}