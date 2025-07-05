#include<bits/stdc++.h>
using namespace std;

int knapsack(int i,int W,vector<int>weight,vector<int>val){

    if(weight[i-1]<=W){
        return max(
            val[i]+knapsack(i-1,W-weight[i-1],weight,val),knapsack(i-1,W,weight,val)
        )
    }
    else {
        return knapsack(i-1,W,weight,val);
    }
}
int main(){
    
}