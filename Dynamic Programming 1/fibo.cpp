#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> dp;
int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    // dp check , to indentify if problem was already solved earlier    
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fibo(n - 1) + fibo(n - 2); // Storing ans 
}
int tabfibo(int n){
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<dp.size();i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int fibo1(int n){
    if(n==0||n==1)return n;
    int a=0;
    int b=1;
    int i=2;
    int c=0;
    while(i<=n){
        c=a+b;
        a=b;
        b=c;
        i++;
        // cout<<c<<">";
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    dp.clear();
    dp.resize(n + 1, -1); // dp[i]==-1 -> that ith subproblem is not yet computed
    cout<<fibo(n)<<endl;
    cout<<tabfibo(n)<<endl;
    cout<<fibo1(n)<<endl;
}