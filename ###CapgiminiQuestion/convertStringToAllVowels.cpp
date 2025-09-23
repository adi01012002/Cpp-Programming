#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int convert(string s){
    unordered_map<char,int>mp{{'a',1},{'e',2},{'i',3},{'o',4},{'u',5}};
    int minCost=INT_MAX;
    for(auto it :mp){
        int cost=0;
        for(char ch : s){
            if(isVowel(ch)){ 
                int x=mp[ch];
                int y=it.second;
                cost+=abs(x-y);
            }
            else {
                cost+=10;
            }

        }
        minCost=min(cost,minCost);
    }
    return minCost;

}
int main(){
    string s="abcioue";
    cout<<convert(s);
}