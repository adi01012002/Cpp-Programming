#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s,string t){
    if(s.size()!=t.size())return false;
    unordered_map<char,int>mp;
    for(auto el:s){
        mp[el]++;
    }
    for(auto el:t){
        if(mp.find(el)==mp.end())return false;
        mp[el]--;
        if(mp[el]==0)mp.erase(el);
    }
    return mp.size()==0;
}
int main(){
    string s="rat";
    string t="car";
    bool ans=isAnagram(s,t);
    cout<<boolalpha<<ans<<endl;
}