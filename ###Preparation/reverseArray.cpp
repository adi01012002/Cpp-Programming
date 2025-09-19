#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={3,5,6,8,7,4,1,0};
    int i=0,j=v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    for(auto it :v)cout<<it<<" ";
}