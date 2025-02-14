#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="anagam";
    string t="nagaam";

    // First Methode By using Two Map

    // unordered_map<char,int>mp1;
    // unordered_map<char,int>mp2;
    // for(int i=0;i<s.size();i++){
    //     mp1[s[i]]++;
    //     mp2[t[i]]++;
    // }
    // bool flag=true;
    // for(auto it:mp1){
    //     char ch=it.first;
    //     int freq=it.second;
    //     if(mp2.find(ch)!=mp2.end()){
    //         int fq=mp2[ch];
    //         if(fq!=freq){
    //             cout<<"Not a Anagram";
    //             flag=false;
    //             break;
    //         }
    //     }
    //     else{
    //         cout<<"Not a Anagram";
    //         flag=false;
    //         break;
    //     }
    // }
    // if(flag)cout<<"It is Anagram";

    // Second Methode by using One Map

    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    bool flag=true;
    for(int i=0;i<t.size();i++){
        if(mp.find(t[i])!=mp.end()){
            mp[t[i]]--;
            if(mp[t[i]]==0)mp.erase(t[i]);
        }
        else {
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<"Not an Anagram--";
    else {
        if(mp.size()==0)cout<<"It is an Anagram";
        else cout<<"Not an Anagram";
    }


}