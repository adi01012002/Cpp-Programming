#include<bits/stdc++.h>
using namespace std;

// for subsequences the order of element is matter while for subset not for subset 
void subsequence(vector<int>v,vector<int>t,int idx){
    if(idx==v.size()){
        for(int i=0;i<t.size();i++){
            cout<<t[i]<<" ";
        }
        cout<<endl;
        return;
    }
    t.push_back(v[idx]);
    subsequence(v,t,idx+1);
    t.pop_back();
    subsequence(v,t,idx+1);
}
int main(){
    vector<int>v={1,2,3,4,5};
    vector<int>t;
    subsequence(v,t,0);
}