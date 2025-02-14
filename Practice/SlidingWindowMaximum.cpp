#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={4,5,8,3,7,9,1,2,4,3,2,6,8};
    int k=4;
    int init=0;
    for(int i=0;i<k;i++){
        init+=v[i];
    }
    int i=0;
    int j=k;
    int maxi=init;
    while(j<=v.size()){
        int c=init+v[j]-v[i];
        // cout<<c<<endl;
        
        maxi=max(maxi,c);
        init=c;
        cout<<c<<" "<<maxi<<endl;
        i++;
        j++;
    }
    cout<<maxi;
}