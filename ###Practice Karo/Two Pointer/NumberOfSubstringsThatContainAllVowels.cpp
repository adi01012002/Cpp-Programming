#include<bits/stdc++.h>
using namespace std;

bool allVovelPresent(unordered_map<char,int>&freq){
    return (
        freq['a']>0 &&
        freq['e']>0 &&
        freq['i']>0 &&
        freq['o']>0 &&
        freq['u']>0 
    );
}
int main(){
    string s="aeiouuoaie";
    int left=0;
    int ans=0;
    unordered_map<char,int>freq;

    for(int right=0;right<s.size();right++){
        freq[s[right]]++;
            // every substring starting from left..right, left+1..right, ... right..right
            // is valid and will remain valid for future right
        while(allVovelPresent(frwhile(allVovelPresent(freq)){eq)){
            ans+=(s.size()-right);
            // cout<<ans<<endl;
            freq[s[left]]--;
            left++;
        }
    }
    cout<<ans;
}


