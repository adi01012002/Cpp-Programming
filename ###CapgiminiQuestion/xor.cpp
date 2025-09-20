#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={3,5,1,7,7,3,5};
    int ans=0;
    for(int i=0;i<v.size();i++){
        ans=ans^v[i];
    }
    cout<<ans;
}