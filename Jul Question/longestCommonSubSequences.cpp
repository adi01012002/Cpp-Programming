#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int idx1,int idx2){

    // if(idx1==s1.size()&& idx2==s2.size())return 0;
    if(idx1>=s1.size()||idx2>=s2.size())return 0;
    if(s1[idx1]==s2[idx2]){
        return 1+lcs(s1,s2,idx1+1,idx2+1);
    }
    else{
        return max(
            lcs(s1,s2,idx1+1,idx2),lcs(s1,s2,idx1,idx2+1)
        );
    }
}

vector<vector<int>>dp1;
int lcsMemo(string s1,string s2,int idx1,int idx2){

    // if(idx1==s1.size()&& idx2==s2.size())return 0;
    if(idx1>=s1.size()||idx2>=s2.size())return 0;

    if(dp1[idx1][idx2]!=-1)return dp1[idx1][idx2];
    if(s1[idx1]==s2[idx2]){
        return dp1[idx1][idx2]=1+lcsMemo(s1,s2,idx1+1,idx2+1);
    }
    else{
        return dp1[idx1][idx2]=max(
            lcsMemo(s1,s2,idx1+1,idx2),lcs(s1,s2,idx1,idx2+1)
        );
    }
}


// for(int i=1;i<n1;i++){
//     for(int j=1j<n2;j++){
//         if(s1[i]==s2[j]){
//             dp[i][j]=1+dp[i-1][j-1];
//         }
//         else{
//             dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
//         }
//     }
// }

int main(){
    string s1="abcdjf";
    string s2="adbjf";
    // cout<<lcs(s1,s2,0,0);
    int n1=s1.size();
    int n2=s2.size();
    dp1.resize(n1+1,vector<int>(n2+1,0));
    lcsMemo(s1,s2,0,0);


    // vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
    // for(int i=1;i<=n1;i++){
    // for(int j=1;j<=n2;j++){
    //     if(s1[i]==s2[j]){
    //         dp[i][j]=1+dp[i-1][j-1];
    //     }
    //     else{
    //         dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
    //     }
    // }
    // }
// cout<<dp[n1][n2];

    for(int i=0;i<dp1.size();i++){
        for(int j=0;j<dp1[0].size();j++){
            cout<<dp1[i][j]<<" ";
        }
        cout<<endl;
    }
}