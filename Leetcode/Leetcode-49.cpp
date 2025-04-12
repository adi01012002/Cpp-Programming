#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> str = {"eat", "tea", "tan", "ate", "nat", "bat"};
    unordered_map<string,vector<string>>mp;
    for(int i=0;i<str.size();i++){
        string lexo=str[i];
        sort(lexo.begin(),lexo.end());
        if(mp.find(lexo)!=mp.end()){
            mp[lexo].push_back(str[i]);
        }
        else {
            vector<string>st;
            st.push_back(str[i]);
            mp.insert({lexo,st});
        }
    }
    vector<vector<string>>ans;
    for(auto el:mp){
        ans.push_back(el.second);
    }

    for(int i=0;i<ans.size();i++){
        for(auto it:ans[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}