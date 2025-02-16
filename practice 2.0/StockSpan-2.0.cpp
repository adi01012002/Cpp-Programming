#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,20,30,40};
    int n=v.size();
    vector<int>span(n,1);
    for(int i=v.size()-1;i>0;i--){
        int a=v[i];
        int j=i-1;
        while(j>=0&&v[j]<a){
            j--;
        }
        span[i]=i-j;
    }
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
}