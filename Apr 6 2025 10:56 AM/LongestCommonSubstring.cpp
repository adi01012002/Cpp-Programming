#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp2;
int LCStTab(string s1,string s2){
    int ans=0;
    int n=s1.size();
    int m=s2.size();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp2[i][j]=1+dp2[i-1][j-1];
                ans=max(ans,dp2[i][j]);
            }
            else dp2[i][j]=0;
        }
    }
    return ans;
}

int LCStRec(string s1,string s2,int i,int j,int count){
    if(i<0||j<0)return 0;
    int res=count;
    if(s1[i]==s2[j]){
        return res=LCStRec(s1,s2,i-1,j-1,count+1);
    }
    int l=LCStRec(s1,s2,i-1,j,0);
    int r=LCStRec(s1,s2,i,j-1,0);
    return res=max({res,l,r});
}
vector<vector<vector<int>>>dp1;
int LCSMemo(string s1,string s2,int i,int j,int count){
    if(i<0||j<0)return count;
    if(dp1[i][j][count]!=-1)return dp1[i][j][count];
    int res=count;
    if(s1[i]==s2[j]){
        res=LCSMemo(s1,s2,i-1,j-1,count+1);
    }
    int l=LCSMemo(s1,s2,i-1,j,0);
    int r=LCSMemo(s1,s2,i,j-1,0);
    res=max({res,l,r});
    return dp1[i][j][count]=res;
}


int main(){
    string s1="abcde";
    string s2="ajbc";
    int n=s1.size();
    int m=s2.size();
    cout<<LCStRec(s1,s2,n-1,m-1,0);
    cout<<endl;
    dp2.resize(n+1,vector<int>(m+1,0));
    cout<<LCStTab(s1,s2);
    cout<<endl;
    dp1.resize(n,vector<vector<int>>(m,vector<int>(max(n,m),-1)));
    cout<<LCSMemo(s1,s2,n-1,m-1,0);
    cout<<endl;
}