#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Longest Common SubSequence  ===>  String should be in Continuous order
int lcs(string s1,string s2,int idx1,int idx2){
    if(idx1<0||idx2<0)return 0;
    if(s1[idx1]==s2[idx2])return 1+lcs(s1,s2,idx1-1,idx2-1);
    else{
        int l1=lcs(s1,s2,idx1,idx2-1);
        int l2=lcs(s1,s2,idx1-1,idx2);
        return max(l1,l2);
    }
}

// Longest common Substring ===> String Should be consecutive

int lcs(string &s1, string &s2, int idx1, int idx2, int count) {
    if (idx1 < 0 || idx2 < 0) return count;

    int newCount = count;
    if (s1[idx1] == s2[idx2]) {
        newCount = lcs(s1, s2, idx1 - 1, idx2 - 1, count + 1);
    }
    
    return max({newCount, lcs(s1, s2, idx1 - 1, idx2, 0), lcs(s1, s2, idx1, idx2 - 1, 0)});
}

// Subset Can be in any order 

int main(){
    string s1="abcde";
    string s2="abce";
    int n1=s1.size();
    int n2=s2.size();
    cout<<lcs(s1,s2,n1-1,n2-1);
}