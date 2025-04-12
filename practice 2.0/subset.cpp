#include<bits/stdc++.h>
using namespace std;
void fsub(vector<int> &v,vector<int>s,int i){
    if(i==v.size()){
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
        return;
    }
    s.push_back(v[i]);
    fsub(v,s,i+1);
    s.pop_back();
    fsub(v,s,i+1);
}
int main(){
    vector<int>v={2,3,5};
    vector<int>s;
    fsub(v,s,0);
}
