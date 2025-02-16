#include<bits/stdc++.h>
using namespace std;
void subarray(vector<int>&v,vector<int>c,int idx){
    if(idx==v.size()){
        for(int i=0;i<c.size();i++){
            cout<<c[i];
        }
        cout<<endl;
        return;
    }
    subarray(v,c,idx+1);
    if(c.size()==0||v[idx-1]==c[c.size()-1]){
        c.push_back(v[idx]);
        subarray(v,c,idx+1);
    }

}
int main(){

    // Iterative approach
    // vector<int>v={1,2,3,4};
    // int n=v.size();
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //             cout<<v[k];
    //         }
    //         cout<<endl;
    //     }
    // }
    vector<int>v={1,2,3,4};
    vector<int>c;
    subarray(v,c,0);
}