#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>groupAnagram(vector<string>s){
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>mp;
    for(int i=0;i<s.size();i++){
        string c=s[i];
        sort(c.begin(),c.end());
        if(mp.find(c)==mp.end()){
            vector<string>t;
            t.push_back(s[i]);
            mp.insert({c,t});
        }
        else{
            mp[c].push_back(s[i]);
        }
    }
    for(auto el:mp){
        ans.push_back(el.second);
    }
    return ans;
}
int main(){
   vector<string>strs = {"eat","tea","tan","ate","nat","bat"};
   vector<vector<string>>ans=groupAnagram(strs);
   for(int i=0;i<ans.size();i++){
    for(auto it:ans[i]){
        cout<<it<<" ";
    }
    cout<<endl;
   }

}