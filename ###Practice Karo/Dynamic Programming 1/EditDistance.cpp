#include<bits/stdc++.h>
using namespace std;

void edit(string s1,string s2,vector<vector<int>>&dp,int n1,int n2){

    for(int i=0;i<=n1;i++) dp[i][0] = i; // delete all characters
    for(int j=0;j<=n2;j++) dp[0][j] = j; // insert all characters
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
        }
    }
}
int main (){
    string s1="azcef";
    string s2="abcdef";
    int n1=s1.size();
    int n2=s2.size();
    vector<vector<int>>dp(n1+1,vector<int>(n2+1));

    edit(s1,s2,dp,n1,n2);

    for(int i=0;i<=n1;i++){
        for(int j=0;j<=n2;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}



//     +---+---+---+---+---+---+---+
//     | 0 | 1 | 2 | 3 | 4 | 5 | 6 |
//     +---+---+---+---+---+---+---+
// (a)| 1 | 0 | 1 | 2 | 3 | 4 | 5 |
// +---+---+---+---+---+---+---+
// (z)| 2 | 1 | 1 | 2 | 3 | 4 | 5 |
// +---+---+---+---+---+---+---+
// (c)| 3 | 2 | 2 | 1 | 2 | 3 | 4 |
// +---+---+---+---+---+---+---+
// (e)| 4 | 3 | 3 | 2 | 2 | 2 | 3 |
// ---+---+---+---+---+---+---+
// (f)| 5 | 4 | 4 | 2 | 3 | 3 | 3 |
// +---+---+---+---+---+---+---+