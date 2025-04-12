#include<bits/stdc++.h>
using namespace std;
int LCSRec(string s1,string s2,int i,int j){
    if(i<0||j<0)return 0;
    if(s1[i]==s2[j]){
        return 1+LCSRec(s1,s2,i-1,j-1);
    }
    else {
        int l=LCSRec(s1,s2,i-1,j);
        int r=LCSRec(s1,s2,i,j-1);
        return max(l,r);
    }
}
vector<vector<int>>dp1;
int LCSMemo(string s1,string s2,int i,int j){
    if(i<0||j<0)return 0;
    if(dp1[i][j]!=-1)return dp1[i][j];
    if(s1[i]==s2[j]){
        return dp1[i][j]=1+LCSMemo(s1,s2,i-1,j-1);
    }
    else {
        int l=LCSMemo(s1,s2,i-1,j);
        int r=LCSMemo(s1,s2,i,j-1);
        return dp1[i][j]=max(l,r);
    }
}
vector<vector<int>>dp2;
int LCSTab(string s1,string s2){
    int n=s1.size();
    int m=s2.size();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp2[i][j]=1+dp2[i-1][j-1];
            }
            else{
                dp2[i][j]=max(dp2[i-1][j],dp2[i][j-1]);
            }
        }
    }
    return dp2[n][m];
}

int main(){
    string s1="abcde";
    string s2="hgecdnk";
    int n=s1.size();
    int m=s2.size();
    cout<<LCSRec(s1,s2,n-1,n-1);
    cout<<endl;
    dp1.resize(n,vector<int>(m,-1));
    cout<<LCSMemo(s1,s2,n-1,m-1);
    cout<<endl;
    dp2.resize(n+1,vector<int>(m+1,0));
    cout<<LCSTab(s1,s2);
    cout<<endl;
}