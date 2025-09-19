#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,4,6,7};  
    reverse(v.begin(),v.end());  // 7 6 4 3 2
    reverse(v.begin()+1,v.end());// 7 2 3 4 6
    reverse(v.begin(),v.begin()+1);
    for(int it : v)cout<<it<<" ";
    cout<<endl;
    vector<int>v1={2,3,4,6,7};  
    reverse(v1.begin()+1,v1.end());// 2 7 6 4 3
    reverse(v1.begin(),v1.begin()+1);
    reverse(v1.begin(),v1.end());  // 7 6 4 3 2
    for(int it : v1)cout<<it<<" ";



}