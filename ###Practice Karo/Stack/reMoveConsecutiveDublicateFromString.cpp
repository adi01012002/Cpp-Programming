#include<bits/stdc++.h>
using namespace std;

void PrintInReverse(stack<char>ch){
    if(ch.size()==0)return;
    char a=ch.top();
    ch.pop();
    PrintInReverse(ch);
    cout<<a;

}
int main(){
    string s="aaabbcdddaabjjhgg";

    stack<char>ch;
    ch.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(ch.top()==s[i])ch.pop();
        ch.push(s[i]);
    }
    // while(!ch.empty()){
    //     cout<<ch.top();
    //     ch.pop();
    // }
    PrintInReverse(ch);

}