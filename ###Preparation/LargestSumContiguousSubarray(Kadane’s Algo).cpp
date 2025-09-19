#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={-3,4,-9,1,-3,6,8,-9,6};
    int Maxi=v[0];
    int maxans=v[0];
    for(int i=1;i<v.size();i++){
        Maxi=max(v[i],Maxi+v[i]);
        maxans=max(Maxi,maxans);
    }
    cout<<maxans<<endl;
}