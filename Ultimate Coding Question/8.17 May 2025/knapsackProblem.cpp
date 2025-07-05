#include<bits/stdc++.h>
using namespace std;


int knapRec(int i,int W,vector<int>wi,vector<int>val){
    if(i==0||W==0)return 0;
    if(wi[i-1]<=W){
        return max(
            val[i-1]+knapRec(i-1,W-wi[i-1],wi,val),knapRec(i-1,W,wi,val)
        );
    }
    else return knapRec(i-1,W,wi,val);
}



vector<vector<int>>dpt;

int knapsack(int W,vector<int>val,vector<int>wi){
    int n=wi.size();
    for(int i=1;i<=n;i++){
        for(int w=0;w<=W;w++){
            if(wi[i-1]<=w){
                dpt[i][w]=max(
                    val[i-1]+dpt[i-1][w-wi[i-1]],dpt[i-1][w]
                    // val[i-1]+dpt[i-1][w-wi[i-1]],dpt[i-1][w] // include
                    
                );
                
            }
            else dpt[i][w]=dpt[i-1][w];
        }
    }
    return dpt[n][W];
}

int main(){
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {1, 4, 5, 7};
    int W = 7;
    int n = wt.size();
    dpt.resize(n+1,vector<int>(W+1,0));
    cout<<knapsack(W,val,wt)<<endl;
    cout<<knapRec(n-1,W,wt,val);

}