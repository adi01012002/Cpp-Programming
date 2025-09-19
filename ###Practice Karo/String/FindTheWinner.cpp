// ####Problem statement####
// You have been given an array/list of “VOTES” which contains the name of the candidates where each entry represents the name of the candidate who got the vote.
// You are supposed to find the name of the candidate who received the maximum number of votes. If there is a tie, then print the lexicographically smaller name.
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>votes={"Rahul","Ankur"};
    multimap<int, string ,greater<int>> sortedMap;
    map<string,int>freqMap;
    for(int i=0;i<votes.size();i++){
        freqMap[votes[i]]++;
    }
    for(auto it:freqMap){
        sortedMap.insert({it.second,it.first});
    }
    for(auto it:sortedMap){
        cout<<it.first<<" "<<it.second<<endl;
    }


}