#include<bits/stdc++.h>
using namespace std;

// Brute Force

// Approach: For each index, we have to find the amount of water that can be stored and 
// we have to sum it up.If we observe carefully the amount the water stored at a particular
// index is the minimum of maximum elevation to the left and right of the index minus the 
// elevation at that index.

// Space Efficient 

int trapingRainWater(vector<int>v){
    int trappedWater=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        int j=i;
        int leftMax=0,rightMax=0;
        while(j>=0){
            leftMax=max(leftMax,v[j]);
            j--;
        }
        j=i;
        while(j<n){
            rightMax=max(rightMax,v[j]);
            j++;
        }
        trappedWater+=min(leftMax,rightMax)-v[i];
    }
    return trappedWater;
}


// Time efficient
int trap(vector<int>v){
    int n=v.size();
    vector<int>pre(n);
    vector<int>suff(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i]=max(pre[i-1],v[i]);
    }
    suff[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--){
        suff[i]=max(suff[i+1],v[i]);
    }

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<suff[i]<<" ";
    // }
    // cout<<endl;
    int trapWater=0;
    for(int i=0;i<n;i++){
        trapWater+=min(pre[i],suff[i])-v[i];
    }
    return trapWater;

}

// Time and Space Efficient

int TrapWater(vector<int>v){
    int n=v.size();
    int leftMax=0,rightMax=0;
    int left=0,right=n-1;
    int trapWater=0;
    while(left<=right){
        if(v[left]<v[right]){
            if(v[left]>=leftMax){
                leftMax=v[left];
            }
            else{
                trapWater+=leftMax-v[left];
            }
            left++;
        }
        else {
            if(v[right]>=rightMax){
                rightMax=v[right];
            }
            else trapWater+=rightMax-v[right];
            right--;
        }
    }
    return trapWater;
}
int main(){
    vector<int>v={4,2,0,3,2,5};
    int ans=trapingRainWater(v);
    cout<<ans<<endl;
    cout<<trap(v)<<endl;
    cout<<TrapWater(v)<<endl;

}