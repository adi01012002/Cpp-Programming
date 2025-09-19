#include<bits/stdc++.h>
using namespace std;
string sortByFrequency(string s){
    map<char,int>freqMap;
    for(char c :s){
        freqMap[c]++;
    }
    multimap<int,char,greater<int>>sortedMap;
    for(auto p :freqMap){
        sortedMap.insert({p.second,p.first});
    }
    string res="";

    for(auto p :sortedMap){
        res.append(p.first,p.second);
    }
    for(auto p :sortedMap){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return res;

}
int main(){
    string s = "eeiaabbabcazzzvvv";
    cout<<sortByFrequency(s)<<endl;
    // string s="abcd";
    // s.append(2,'a');
    // cout<<s;
}