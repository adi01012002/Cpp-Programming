#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {2, 3, 4, 5};
    int count=0;
    int n=arr.size();
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(arr[i],arr[j])==1)count++;
        }
    }
    cout<<count;

}