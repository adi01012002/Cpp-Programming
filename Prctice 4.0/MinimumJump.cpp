#include<bits/stdc++.h>
using namespace std;

int MinJumpRec(vector<int>v,int i){
    if(i>=v.size()-1)return 0;
    int ans=INT_MAX;
    for(int j=i+1;j<=i+v[i];j++){
        int res=MinJumpRec(v,j);
        if(res!=INT_MAX){
            ans=min(ans,res+1);
        }
    }
    return ans;
}

int main(){
    vector<int>v={1, 3, 5};
    cout<<MinJumpRec(v,0);
}