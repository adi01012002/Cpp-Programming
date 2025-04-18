#include<bits/stdc++.h>
using namespace std;

// Recursion 
int LCSRec(string s1,string s2,int idx1,int idx2){
    if(idx1<0||idx2<0)return 0;
    if(s1[idx1]==s2[idx2]){
        return 1+LCSRec(s1,s2,idx1-1,idx2-1);
    }
    else {
        return max(LCSRec(s1,s2,idx1-1,idx2),LCSRec(s1,s2,idx1,idx2-1));
    }
}

// Recursion + Memoization

vector<vector<int>>dp;
int LCSMemo(string s1,string s2,int idx1,int idx2){
    if(idx1<0||idx2<0)return 0;
    if(dp[idx1][idx2]!=-1)return dp[idx1][idx2];
    if(s1[idx1]==s2[idx2]){
        return dp[idx1][idx2]=1+LCSMemo(s1,s2,idx1-1,idx2-1);
    }
    else {
        return dp[idx1][idx2]=max(LCSMemo(s1,s2,idx1,idx2-1),LCSMemo(s1,s2,idx1,idx2-1));
    }
}

// Tabulation

int LCSTdp(string s1,string s2){
    int n1=s1.size();
    int n2=s2.size();
    for(int i=1;i<n1;i++){
        for(int j=1;j<n2;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n1-1][n2-1];
}
int main(){
    string s1="abc";
    string s2="abnhc";
    int n1=s1.size();
    int n2=s2.size();
    cout<<LCSRec(s1,s2,n1-1,n2-1);
    cout<<endl;
    dp.resize(n1,vector<int>(n2,-1));
    cout<<LCSMemo(s1,s2,n1-1,n2-1);
    cout<<endl;
    cout<<LCSTdp(s1,s2);
    cout<<endl;
}