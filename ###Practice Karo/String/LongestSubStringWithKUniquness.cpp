#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "aabacbebebe";
    int k = 3;
    map<char,int>mpp;
    int i=0;int j=0;
    int maxLen=-1;

    while(j<s.size()){
        mpp[s[j]]++;
        if(mpp.size()==k){
            maxLen=max(maxLen,j-i+1);
        }
        // else if(mpp.size()>k){
            while(mpp.size()>k){
                mpp[s[i]]--;
                if(mpp[s[i]]==0)mpp.erase(s[i]);
                i++;
            }
        // }
        j++;
    }
    cout<<maxLen<<endl;
}