#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,3,4,2,6,3};
    int minP=INT_MAX;
    int maxP=INT_MIN;
    for(int i=0;i<v.size();i++){
        minP=min(minP,v[i]);
        maxP=max(maxP,v[i]-minP);
    }
    cout<<maxP<<endl;
}