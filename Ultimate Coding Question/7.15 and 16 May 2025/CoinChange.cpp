#include<bits/stdc++.h>
using namespace std;

int coinChangeRec(vector<int>v,int amount){
    if(amount==0)return 0;
    if(amount<0)return INT_MAX;
    int res=INT_MAX;
    for(auto coin : v){
        int val=coinChangeRec(v,amount-coin);
        if(val!=INT_MAX){
            res=min(res,val+1);
        }
    }
    return res;
}

vector<int>dpm;
int coinChangeMemo(vector<int>v,int amount){
    if(amount==0)return 0;
    if(amount<0)return INT_MAX;
    if(dpm[amount]!=-1)return dpm[amount];
    int res=INT_MAX;
    for(auto coin : v){
        if(coin<=amount){
            int val=coinChangeMemo(v,amount-coin);
            if(val!=INT_MAX){
                res=min(res,val+1);
            }
        }
    }
    return dpm[amount]=res;
}


vector<int>dpt;
int coinChangeTda(vector<int>v,int amount){
    dpt[0]=0;
    for(int i=1;i<=amount;i++){
        for(auto coin : v){
            if(coin<=i){
                int val=dpt[i-coin];
                if(val!=INT_MAX){
                    dpt[i]=min(dpt[i],val+1);
                }
            }
        }
    }
    return dpt[amount];
 
}

int main(){
    vector<int>v={2,3,4};
    int n=v.size();
    int amount=6;
    cout<<coinChangeRec(v,amount)<<endl;
    dpm.resize(amount+1,-1);
    cout<<coinChangeMemo(v,amount)<<endl;
    dpt.resize(amount+1,INT_MAX);
    cout<<coinChangeTda(v,amount)<<endl;
}