#include<bits/stdc++.h>
using namespace std;
int n=3;
void binarySubstring(string s){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    binarySubstring(s+'0');
    if(s==""|| s[s.size()-1]=='0'){
        binarySubstring(s+'1');
    }


}
int main(){
    binarySubstring("");
}