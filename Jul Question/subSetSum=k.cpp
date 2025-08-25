#include<bits/stdc++.h>
using namespace std;

bool subSetSum(vector<int>&v,int k,int idx){
    if(idx==v.size()){
        if(k==0)return true;
    }
    if(k<0||idx>v.size())return false;
    return subSetSum(v,k-v[idx],idx+1)||subSetSum(v,k,idx+1);
}
int main(){
    vector<int>v={2,6,3,5};
    int k=4;
    cout<<boolalpha<<subSetSum(v,k,0);
}