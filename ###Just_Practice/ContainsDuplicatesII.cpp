#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,0,1,1};
    bool flag=false;
    int k=1;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j] && abs(i-j)<=k){
                flag=true;
                break;
            }
        }
        if(flag)break;
    }
    if(flag) cout<<boolalpha<<true;
    else cout<<boolalpha<<false;

    cout<<endl<<endl;

    unordered_map<int,int>mp;
    k=3;
    flag=false;
    for(int i=0;i<v.size();i++){
        if(mp.find(v[i])!=mp.end() && abs(i-mp[v[i]])<=k){
            flag=true;
            break;
        }
        mp[v[i]]=i;
    }
    if(flag)cout<<boolalpha<<true;
    else cout<<boolalpha<<false;
    cout<<endl<<endl;
}