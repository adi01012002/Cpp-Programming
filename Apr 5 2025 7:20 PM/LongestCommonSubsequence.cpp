#include<bits/stdc++.h>
using namespace std;

//Pure Recursion 
int LCS(string s1,string s2,int idx1,int idx2){
    if(idx1<0||idx2<0)return 0;
    if(s1[idx1]==s2[idx2]){
        return 1+LCS(s1,s2,idx1-1,idx2-1);
    }
    else{
        int l=LCS(s1,s2,idx1-1,idx2);
        int r=LCS(s1,s2,idx1,idx2-1);
        return max(l,r);
    }
}

// Top Down Approach 
vector<vector<int>>dpt;
int LCSTdA(string s1,string s2,int i,int j){
    if(i<0||j<0)return 0;
    if(dpt[i][j]!=-1)return dpt[i][j];
    if(s1[i]==s2[j]){
        return dpt[i][j]=1+LCSTdA(s1,s2,i-1,j-1);
    }
    else{
        int l=LCSTdA(s1,s2,i-1,j);
        int r=LCSTdA(s1,s2,i,j-1);
        return dpt[i][j]=max(l,r);
    }
}

// Bottom up Approach

vector<vector<int>>dpu;  
int LCSBuA(string s1,string s2){
    int m=s2.size();
    int n=s1.size();
    for(int i=1;i<=n;i++){                         // ans is same  for both cases
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dpu[i][j]=1+dpu[i-1][j-1];
            }
            else{
                dpu[i][j]=max(dpu[i-1][j],dpu[i][j-1]);
            }
        }
    }
    return dpu[n][m];
}

int main(){
    // string s1="abcde";
    // string s2="aebsc";
    string s1="abcdjf";
    string s2="adbjf";
    // string s1="abc";
    // string s2="abnhc";
    int m=s2.size();
    int n=s1.size();
    // dpt.resize(n,vector<int>(m,-1));
    // dpu.resize(n+1,vector<int>(m+1,0));  // n+1 can be n and m+1 can be m


    cout<<LCS(s1,s2,s1.size()-1,s2.size()-1);
    // cout<<endl;
    // cout<<LCSTdA(s1,s2,n-1,m-1);
    // cout<<endl;
    // cout<<LCSBuA(s1,s2);
    // cout<<LCSBuA(s1,s2)<<endl;
    // for(int i=0;i<dpu.size();i++){
    //     for(int j=0;j<dpu[i].size();j++){
    //         cout<<dpu[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    
}
    // for(int i=0;i<dp.size();i++){
    //     for(int j=0;j<dp[i].size();j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

// for size n,m
// 0 0 0 0 0 0 0 
// 0 1 1 1 1 1 1 
// 0 1 1 2 2 2 2 
// 0 1 1 2 2 3 3 
// 0 1 1 2 2 3 3 

// for size n+1,m+1
// 0 0 0 0 0 0 0 0 
// 0 1 1 1 1 1 1 1 
// 0 1 1 2 2 2 2 2 
// 0 1 1 2 2 3 3 3 
// 0 1 1 2 2 3 3 3 
// 0 1 1 2 2 3 3 3 
