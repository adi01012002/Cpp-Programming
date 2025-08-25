#include<bits/stdc++.h>
using namespace std;
void helper(vector<int>v,int idx,vector<int>r,int k){
    if(idx>=v.size()){
        if(r.size()==k){   // remove for subset
            for(int i=0;i<r.size();i++){
                cout<<r[i]<<" ";
            }   // this too
            cout<<endl;
        }
        return;
    }
    r.push_back(v[idx]);
    helper(v,idx+1,r,k);
    r.pop_back();
    helper(v,idx+1,r,k);     
}
int main() {
    vector<int>v={1,2,3};
    vector<int>r;
    helper(v,0,r,2);
    return 0;
    
//   subset  subsequence   / k size subsequence 
//   ________________
//   | 3     |      |
//   | 2     |      |
//   | 2 3   |  2 3 |
//   | 1     |      |
//   | 1 3   |  1 3 |
//   | 1 2   |  1 2 |
//   | 1 2 3 |      |
//   ----------------    
}