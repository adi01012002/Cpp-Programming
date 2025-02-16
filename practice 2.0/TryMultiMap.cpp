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
    string res;
    for(auto p :sortedMap){
        res.append(p.first,p.second);
    }
    return res;

}
int main(){
    string s = "eeiaabbabcazzzvvv";
    cout<<sortByFrequency(s)<<endl;
}