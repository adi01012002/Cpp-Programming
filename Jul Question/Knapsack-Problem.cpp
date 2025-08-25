#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&wt,vector<int>&val,int W,int idx){

    if(idx==0||W==0)return 0;
    if(wt[idx-1]<=W){
        return max(
            val[idx-1]+find(wt,val,W-wt[idx-1],idx-1),find(wt,val,W,idx-1)
        );
    }
    else return find(wt,val,W,idx-1);
}


int find1(vector<int>&wt,vector<int>&val,int W,int idx){

    if(idx==0){
        if(wt[0]<=W){
            return val[0];
        }
        else return 0;
    }
    if(wt[idx]<=W){  
        return max(
            val[idx]+find1(wt,val,W-wt[idx],idx-1),find1(wt,val,W,idx-1)
        );
    }
    else return find1(wt,val,W,idx-1);
}

int main(){
    vector<int>wt={3,4,5};
    vector<int>val={30,50,60};
    int n=val.size();
    int W=9;
    cout<<find1(wt,val,W,n-1);

}