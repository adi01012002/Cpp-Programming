#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2, 1, -3, 2, -4, 2};
    int Psum=0;
    int Len=INT_MAX;
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        Psum+=v[i];
        if(Psum==0)Len=i+1;
        if(mp.find(Psum)!=mp.end()){
            int j=mp[Psum];
            Len=min(Len,i-j);
        }
        else{
            mp[Psum]=i;
        }
    }
    cout<<Len<<endl;
}