#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={7,6,4,3,1};
    int mini=INT_MAX;
    int max_P= INT_MIN;

    for(int i=0;i<v.size();i++){
        mini=min(mini,v[i]);
        max_P=max(max_P,v[i]-mini);
    }
    cout<<max_P;
}