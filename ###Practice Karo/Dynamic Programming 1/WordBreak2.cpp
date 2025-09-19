#include<bits/stdc++.h>
using namespace std;

vector<string> solve(string s,unordered_map<string,bool>&wordDict,int i){
    if(i==s.size())return {""};
    vector<string>ans;
    string word;
    for(int j=i;j<s.size();j++){
        word.push_back(s[j]);
        if(wordDict.find(word)==wordDict.end())continue;
        auto right=solve(s,wordDict,j+1);
        for(auto it :right){
            string end;
            if(it.size()>0)end= " " + it;
            ans.push_back(word+end);
        }
    }
    return ans;
}

int main(){
    string s = "catsanddog";
    vector<string>wordDict = {"cat","cats","and","sand","dog"};
    unordered_map<string,bool>mp;
    for(int i=0;i<wordDict.size();i++){
        mp[wordDict[i]]=1;
    }

   vector<string>ans=solve(s,mp,0);
   for(auto it:ans)cout<<it<<endl;
   
}
