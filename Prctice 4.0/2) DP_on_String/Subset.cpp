#include<bits/stdc++.h>
using namespace std;
void subset(string s,string t,int idx){
    if(idx==s.size()){
        cout<<t<<endl;
        return;
    }
    subset(s,t+s[idx],idx+1);
    subset(s,t,idx+1);
}

void subset(string s,string t){
    if(s.size()==0){
        cout<<t<<endl;
        return;
    }
    subset(s.substr(1),t+s[0]);
    subset(s.substr(1),t);

}
int main(){
    string s="abc";
    subset(s,"",0);
    subset(s,"");
}