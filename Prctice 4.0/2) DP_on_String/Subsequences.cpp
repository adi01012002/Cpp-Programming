#include<bits/stdc++.h>
using namespace std;
void subsequence(string s,string t,int idx){
    if(idx==s.size()){
        cout<<t<<endl;
        return;
    }
    subsequence(s,t+s[idx],idx+1); // Include
    subsequence(s,t,idx+1);        // Exclude
}

void subsequence(string s,string t){
    if(s.empty()){
        cout<<t<<endl;
        return;
    }
    subsequence(s.substr(1),t+s[0]);   // Include
    subsequence(s.substr(1),t);        // Exclude
}
int main(){
    string s="abc";
    subsequence(s,"",0);
}