#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={-2,3,-1,5,-5,-4,9,-3,6,4,3};
    int i=0,j=0;
    while(j<v.size()){
        if(v[j]<0){
            swap(v[i],v[j]);
            i++;
            j++;
        }else j++;
    }
    for(int it:v)cout<<it<<" ";
}