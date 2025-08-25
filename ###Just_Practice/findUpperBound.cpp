#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v={3, 5, 8, 9, 15, 19};
   int x=9;
   int low=0;
   int high=v.size()-1;
   int ans=-1;
   while(low<=high){
    int mid=(high+low)/2;
    if(v[mid]>x){
        ans=mid;
        high=mid-1;
    }
    else low=mid+1;
   }
   cout<<ans;
}