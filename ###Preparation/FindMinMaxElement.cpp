#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={4,6,8,1,5,6,10,4,0};
    int Max=INT_MIN;
    int Min=INT_MAX;
    for(int i=0;i<v.size();i++){
        Max=max(Max,v[i]);
        Min=min(Min,v[i]);
    }
    cout<<Max<<" "<<Min<<endl;
}