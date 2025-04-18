#include<bits/stdc++.h>
using namespace std;

// Pure Recursion
int LCStrRec(string s1,string s2,int idx1,int idx2,int count){
    if(idx1<0||idx2<0)return count;
    int res=count;
    if(s1[idx1]==s2[idx2]){
        res=LCStrRec(s1,s2,idx1-1,idx2-1,count+1);
    }
    res=max({res,LCStrRec(s1,s2,idx1-1,idx2,0),LCStrRec(s1,s2,idx1,idx2-1,0)});
    return res;
}

// Recursion + Memoization

vector<vector<vector<int>>>dpm;
int LCStrMemo(string s1,string s2,int idx1,int idx2,int count){
    if(idx1<0||idx2<0)return count;
    if(dpm[idx1][idx2][count]!=-1)return dpm[idx1][idx2][count];
    int res=count;
    if(s1[idx1]==s2[idx2]){
        res=LCStrMemo(s1,s2,idx1-1,idx2-1,count+1);
    }
    res=max({res,LCStrMemo(s1,s2,idx1-1,idx2,0),LCStrMemo(s1,s2,idx1,idx2-1,0)});
    return dpm[idx1][idx2][count]=res;
}

// Tabulation

vector<vector<int>>dpt;
int LCStrTab(string s1,string s2){
    int n1=s1.size();
    int n2=s2.size();
    int ans=0;
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            if(s1[i]==s2[j]){
                dpt[i][j]=1+dpt[i-1][j-1];
                ans=max(ans,dpt[i][j]);
            }
            else{
                dpt[i][j]=0;
            }
        }
    }
    return ans;
}
int main(){
    string s1="abcd";
    string s2="abjkcgd";
    int n1=s1.size();
    int n2=s2.size();
    cout<<LCStrRec(s1,s2,n1-1,n2-1,0);
    cout<<endl;
    // dpm.resize(n1,vector<vector<int>>(n2,vector<int>(max(n1,n2),-1)));
    dpm.resize(n1, vector<vector<int>>(n2, vector<int>(max(n1, n2), -1))); 
    cout<<LCStrMemo(s1,s2,n1-1,n2-1,0);
    cout<<endl;
    dpt.resize(n1+1,vector<int>(n2+1,0));
    cout<<LCStrTab(s1,s2);

    
}