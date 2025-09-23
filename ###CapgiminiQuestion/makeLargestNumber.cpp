#include<bits/stdc++.h>
using namespace std;

string make(string s,int x){
    int f=0;
    for(int i=0;i<s.size();i++){
        char val=s[i];
        if(s[i]=='-'&&i==0)continue;
        if(s[0]=='-'){
            if(x<val-'0'){
            f=1;
            // s=s.substr(0,i)+to_string(x)+s.substr(i);
            s.insert(i, to_string(x));
            break;
        }
        }
        else{
            if(x>val-'0'){
            f=1;
            // s=s.substr(0,i)+to_string(x)+s.substr(i);
            s.insert(i, to_string(x));
            break;
        }
        }

    }
    if(f==0){
        s=s+to_string(x);
    }
    return s;
}
int main(){
    string s="-41";
    int x=2;
   cout<<make(s,x);
}