#include<bits/stdc++.h>
using namespace std;
vector<int> PlusOne(vector<int>v){
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]<9){       // No carray required 
            v[i]++;
            return v;
        }
        else v[i]=0; // we assume that 1 carry will be added to forword
    }
    v.insert(v.begin(),1);
    return v;
}
int main(){
    vector<int>v={8,9};
    vector<int>ans=PlusOne(v);
    for(auto it :ans)cout<<it<<" ";
}