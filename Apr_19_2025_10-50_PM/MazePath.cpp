#include<bits/stdc++.h>
using namespace std;
int mazePath(int sr,int sc){
    if(sr==0&&sc==0)return 1;
    if(sr<0 || sc<0)return 0;
    int left=mazePath(sr-1,sc);
    int up=mazePath(sr,sc-1);
    return left+up;
}
void PrintmazePath(int sr,int sc,string s){
    if(sr==0&&sc==0){
        cout<<s<<endl;
        return;
    }
    if(sr<0 || sc<0)return;
    PrintmazePath(sr-1,sc,s+'R');
    PrintmazePath(sr,sc-1,s+'D');
}
int main(){
    // cout<<mazePath(2,2);
    string s="";
    PrintmazePath(2,2,s);
    cout<<s;
}