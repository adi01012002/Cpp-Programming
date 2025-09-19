#include<bits/stdc++.h>
using namespace std;
int NumberOfUniqueBinaryTree(int n){
    if(n<=1)return 1;
    int total=0;
    for(int i=1;i<=n;i++){
        int left=NumberOfUniqueBinaryTree(i-1);
        int right=NumberOfUniqueBinaryTree(n-i);
        total+=left*right;
    }
    return total;
}

int NumberOfUniqueBinaryTree1(int n,vector<int>dp){
    if(n<=1)return 1;
    int total=0;
    if(dp[n]!=-1)return dp[n];
    for(int i=1;i<=n;i++){
        int left=NumberOfUniqueBinaryTree1(i-1,dp);
        int right=NumberOfUniqueBinaryTree1(n-i,dp);
        total+=left*right;
    }
    return dp[n]=total;
}


int NumberOfUniqueBinaryTree2(int n){
    vector<int>dp(n+1,0);
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i]+=dp[j-1]*dp[i-j];
        }
    }
    return dp[n];
}

int main(){
    int n=3;
    vector<int>dp(n+1,-1);
    cout<<NumberOfUniqueBinaryTree2(n);
}





// class Solution {
// public:
//     long long binomialCoeff(int n, int k) {
//         long long res = 1;
//         for (int i = 0; i < k; i++) {
//             res *= (n - i);
//             res /= (i + 1);
//         }
//         return res;
//     }
    
//     int numTrees(int n) {
//         long long c = binomialCoeff(2 * n, n);
//         return (int)(c / (n + 1)); // Catalan number
//     }
// };
