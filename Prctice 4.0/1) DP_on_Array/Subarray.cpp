#include<bits/stdc++.h>
using namespace std;
void subarray(vector<int>v,vector<int>t,int idx){
    if(idx==v.size()){
        for(int i=0;i<t.size();i++){
            cout<<t[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subarray(v,t,idx+1);
    if(t.size()==0||v[idx-1]==t[t.size()-1]){
        t.push_back(v[idx]);
        subarray(v,t,idx+1);
        // t.pop_back();
    }
}
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>t;
    subarray(v,t,0);
}