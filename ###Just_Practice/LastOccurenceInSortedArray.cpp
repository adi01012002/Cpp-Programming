#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={3,4,13,13,20,20,20,20,40};
    int x = 20;
    int n=v.size();
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]<=x){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    cout<<"Last Occurence of "<< x <<" is : "<<ans<<endl;

    low=0;
    high=n-1;
    ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==x){
            ans=mid;
            high=mid-1;
        }
        else if(v[mid]>x){
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<"First Occurence of "<< x<<" is : "<<ans<<endl;
}