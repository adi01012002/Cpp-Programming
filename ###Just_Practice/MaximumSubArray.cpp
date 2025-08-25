#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={5,4,-1,7,8};

    int maxSum=INT_MIN;
    for(int i=0;i<v.size();i++){
        int currSum=0;
        for(int j=i;j<v.size();j++){
            currSum+=v[j];
            maxSum=max(maxSum,currSum);
        }
    }

    cout<<maxSum;

    // int currSum=v[0];
    // int MaxSum=v[0];
    // for(int i=1;i<v.size();i++){
    //     currSum=max(v[i],v[i]+currSum);
    //     MaxSum=max(currSum,MaxSum);
    // }
    // cout<<MaxSum<<endl;
}