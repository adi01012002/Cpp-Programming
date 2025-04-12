#include<bits/stdc++.h>
using namespace std;

//  Pure Recursion 
// Recursive function to find Longest Common Substring
int LCSRec(string &s1, string &s2, int i, int j, int count) {
    if (i < 0 || j < 0) return count; // Base case
    int res = count;
    if (s1[i] == s2[j]) {
        res = LCSRec(s1, s2, i - 1, j - 1, count + 1); // Extend the substring
    }
    // Explore other possibilities
    res = max({res, LCSRec(s1, s2, i - 1, j, 0), LCSRec(s1, s2, i, j - 1, 0)});
    return res;
}

// Top Down Approach 
// Memoization table
vector<vector<vector<int>>> dp;
int LCSMemo(string &s1, string &s2, int i, int j, int count) {
    if (i < 0 || j < 0) return count; // Base case
    if (dp[i][j][count] != -1) return dp[i][j][count]; // Return cached result
    int res = count;
    if (s1[i] == s2[j]) {
        res = LCSMemo(s1, s2, i - 1, j - 1, count + 1);
    }
    res = max({res, LCSMemo(s1, s2, i - 1, j, 0), LCSMemo(s1, s2, i, j - 1, 0)});
    return dp[i][j][count] = res; // Store result
}



// Bottom up Approach

vector<vector<int>>dpu;  
int LCSTab(string s1,string s2){
    int m=s2.size();
    int ans=0;
    int n=s1.size();
    for(int i=1;i<=n;i++){                         // ans is same  for both cases
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dpu[i][j]=1+dpu[i-1][j-1];
                ans=max(ans,dpu[i][j]);
            }
            else{
                // dpu[i][j]=max(dpu[i-1][j],dpu[i][j-1]);
                dpu[i][j]=0;
                // ans=max(ans,dpu[i][j]);
            }
        }
    }
    return ans;
}

int main(){
    string s1="bbbab";
    string s2="babbb";
    int m=s2.size();
    int n=s1.size();
    dp.resize(n, vector<vector<int>>(m, vector<int>(max(n, m), -1))); // Initialize DP table
    dpu.resize(n+1,vector<int>(m+1,0));  // n+1 can be n and m+1 can be m


    cout<<LCSRec(s1,s2,s1.size()-1,s2.size()-1,0);
    cout<<endl;
    cout<<LCSMemo(s1,s2,n-1,m-1,0);
    cout<<endl;
    cout<<LCSTab(s1,s2);
    // cout<<endl;
}