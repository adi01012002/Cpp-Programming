#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr = {900, 940, 950, 1100, 1500, 1800};
    vector<int>dep  = {910, 1200, 1120, 1130, 1900, 2000};
    int n=arr.size();

    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());

    int i=1,j=0;
    int platform=1,maxPlatform=1;

    while(i<n&&j<n){
        if(arr[i]<=dep[j]){
            platform++;
            i++;
        }
        else{
            platform--;
            j++;
        }
        maxPlatform=max(maxPlatform,platform);
    }

    cout<<maxPlatform<<endl;

}