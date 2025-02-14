#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print1(int arr[],int idx,int n){
    if(idx==n)return;
    cout<<arr[idx]<<" ";
    print1(arr,idx+1,n);
}
void print2(vector<int>&v,int idx){
    if(idx==v.size())return;
    cout<<v[idx]<<" ";
    print2(v,idx+1);
}
void maxOfV(vector<int>&v,int idx,int maxe){
    if(idx==v.size()){
        cout<<maxe;
        return;
    }
    maxe=min(maxe,v[idx]);
    maxOfV(v,idx+1,maxe);
}
int maxofVec(vector<int>&v,int idx){
    if(idx==v.size())return INT_MIN;
    return max(v[idx],maxofVec(v,idx+1));
}
int main(){
    int arr[]={3,4,6,7,6,4,27,9,0};
    vector<int>v={3,4,6,7,6,94,2,9,0};
    // print(arr,0,9);
    // print2(v,0);
    // maxOfV(v,0,INT_MIN);
    // maxOfV(v,0,INT_MAX);
    cout<<maxofVec(v,0);

}