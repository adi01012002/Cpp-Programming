#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;
int LCSMemo(string s1,string s2 ,int idx1,int idx2){
    if(idx1<0||idx2<0)return 0;
    if(dp[idx1][idx2]!=-1)return dp[idx1][idx2];
    if(s1[idx1]==s2[idx2]){
        dp[idx1][idx2]=1+LCSMemo(s1,s2,idx1-1,idx2-1);
    }
    else {
        int left=LCSMemo(s1,s2,idx1-1,idx2);
        int right=LCSMemo(s1,s2,idx1,idx2-1);
        dp[idx1][idx2]= max(left,right);
    }
    return dp[idx1][idx2];
}



int LCSRec(string s1,string s2 ,int idx1,int idx2){
    if(idx1<0||idx2<0)return 0;
    if(s1[idx1]==s2[idx2]){
        return 1+LCSRec(s1,s2,idx1-1,idx2-1);
    }
    else {
        int left=LCSRec(s1,s2,idx1-1,idx2);
        int right=LCSRec(s1,s2,idx1,idx2-1);
        return max(left,right);
    }
}
int main(){
    string s1="abcdeq";
    string s2="adq";
    int n1=s1.size();
    int n2=s2.size();
    dp.resize(n1,vector<int>(n1,-1));
    cout<<LCSRec(s1,s2,n1-1,n2-1)<<endl;
    cout<<LCSMemo(s1,s2,n1-1,n2-1)<<endl;

}