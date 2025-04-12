#include<bits/stdc++.h>
using namespace std;
int c=0;
void helper(vector<int>&v,vector<int>ans,int idx,int a){
    if(idx==v.size()){
        if(a%2!=0)c++;
        return;
    }
    helper(v,ans,idx+1,a+v[idx]);
    if(ans.size()==0||v[idx-1]==ans[ans.size()-1]){
        ans.push_back(v[idx]);
        helper(v,ans,idx+1,a+v[idx]);
    }
}
void helper1(vector<int>& v, int idx, int a) {
    if (idx == v.size()) {
        if (a % 2 != 0) c++; // If the sum is odd, count it
        return;
    }

    // Include current element in sum (continue current subarray)
    helper1(v, idx + 1, a + v[idx]);
    // Start a new subarray from the next index (reset sum)
    helper1(v, idx + 1, 0);
}
int main(){
    vector<int>v={1,2,3,4,5,6,7};
    vector<int>ans;
    // helper(v,ans,0,0);
    helper1(v,0,0);
    cout<<c;
}