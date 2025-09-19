#include<bits/stdc++.h>
using namespace std;

bool check(vector<string>wordDict,string word){
    for(auto it:wordDict){
        if(it==word)return true;
    }
    return false;
}

bool solve(string s,vector<string>&wordDict,int start){
    if(start==s.size())return true;
    string word="";
    bool flag=false;

    for(int i=start;i<s.size();i++){
        word+=s[i];
        if(check(wordDict,word)){
           flag = flag || solve(s,wordDict,i+1);
        }
    }
    return flag;
}



bool solveMemo(string s,vector<string>&wordDict,int start,vector<int>&dp){
    if(start==s.size())return true;
    if(dp[start]!=-1)return dp[start];
    string word="";
    bool flag=false;

    for(int i=start;i<s.size();i++){
        word+=s[i];
        if(check(wordDict,word)){
           flag = flag || solveMemo(s,wordDict,i+1,dp);
        }
    }
    return dp[start]=flag;
}

int main(){
    string s="leetcode";
    vector<string>wordDict={"leet","code"};
    vector<int>dp(s.size(),-1);
    cout<<boolalpha<<solveMemo(s,wordDict,0,dp);
}