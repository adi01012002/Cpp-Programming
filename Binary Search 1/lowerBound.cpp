#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=20;
    //  O(n) Time Complexity
    
    // for(int i=0;i<n;i++){
    //     if(arr[i]>x){
    //         cout<<arr[i-1]; // arr[i] for upper bound
    //         break;
    //     }
    // }

    // O(logn) Time Complexity
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid-1];  // arr[mid+1] for Upper Bound            
            break;
        }
        if(arr[mid]<x)lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false)cout<<"Lower Bound of "<<x <<" is "<<arr[hi]<<endl;
    // cout<<lo<<" "<<hi;
    cout<<"Upper Bound of "<<x <<" is "<<arr[lo];

}