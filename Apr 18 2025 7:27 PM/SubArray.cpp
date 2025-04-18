#include<bits/stdc++.h>
using namespace std;
void subArray(vector<int>v,vector<int>res,int idx){
    if(idx==v.size()){
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subArray(v,res,idx+1);
    if(res.size()==0||v[idx-1]==res[res.size()-1]){
        res.push_back(v[idx]);
        subArray(v,res,idx+1);
    }
}
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>res;
    subArray(v,res,0);
}