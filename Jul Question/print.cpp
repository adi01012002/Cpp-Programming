#include<bits/stdc++.h>
using namespace std;
// void print1toN(int n,int& sum){
//     if(n==0)return ;
//     sum+=n;
//     print1toN(n-1,sum);
//     cout<<n<<endl;
// }

void print1toN(int n,int *sum){
    if(n==0)return ;
    *sum+=n;
    print1toN(n-1,sum);
    cout<<n<<endl;
}

void revArray(vector<int>&v,int i,int j){
    if(i>=j)return ;
    swap(v[i],v[j]);
    return revArray(v,i+1,j-1);
}
int main(){
    // int sum=0;
    // int *ptr=&sum;
    // print1toN(5,ptr);
    // cout<<sum;
    vector<int>v={1,3,5,7,2};
    int n=v.size();
    revArray(v,0,n-1);
    for(int it : v)cout<<it<<" ";
}