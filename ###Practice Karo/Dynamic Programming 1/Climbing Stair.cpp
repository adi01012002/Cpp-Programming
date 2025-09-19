#include<bits/stdc++.h>
using namespace std;

int stair(int n){
    if(n==0)return 1;
    if(n<0)return 0;
    return stair(n-1)+stair(n-2);
}
vector<int>v;
int stair1(int n){
    if(n==0)return 1;
    if(n<0)return 0;
    if(v[n]!=-1)return v[n];
    return v[n]=stair(n-1)+stair(n-2);
}


int TotalWays(int currentStair,int targetStair,unordered_map<int,int>&memo){
    if(currentStair==targetStair) return 1;

    if(currentStair>targetStair)return 0;

    int currentKey=currentStair;

    if(memo.find(currentKey)!=memo.end()){
        return memo[currentKey];
    }

    int oneStep=TotalWays(currentStair+1,targetStair,memo);
    int twoStep=TotalWays(currentStair+2,targetStair,memo);
    memo[currentKey]=oneStep+twoStep;
    return oneStep+twoStep;
}

int main(){
    unordered_map<int,int> memo;
    int n=5;
    cout<<TotalWays(0,n,memo)<<endl;
    v.resize(n+1,-1);
    cout<<stair(n)<<endl;
    cout<<stair1(n)<<endl;
    for(int it :v)cout<<it<<" ";
}