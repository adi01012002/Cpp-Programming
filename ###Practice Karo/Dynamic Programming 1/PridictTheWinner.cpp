#include<bits/stdc++.h>
using namespace std;

int predictTheWinner(vector<int>&v,int start,int end){
    if(start==end)return v[start];
    int diffByStart=v[start]-predictTheWinner(v,start+1,end);
    int diffByEnd=v[end]-predictTheWinner(v,start,end-1);
    return max(diffByEnd,diffByStart);
}

int main(){
    vector<int>v={5,2};
    int ans=predictTheWinner(v,0,v.size()-1);
    cout<<ans<<endl;
    if(ans>=0)cout<<boolalpha<<true;
    else cout<<boolalpha<<false;
}