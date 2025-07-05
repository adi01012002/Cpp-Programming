#include<bits/stdc++.h>
using namespace std;

int mazePath(int r,int c){
    if(r==0&&c==0) return 1;
    if(r<0||c<0)return 0;
    int up=mazePath(r-1,c);
    int left=mazePath(r,c-1);
    return up+left;
}
void PrintMazePath(int r,int c,string s){
    if(r==0&&c==0){
        cout<<s<<endl;
        return;
    }
    if(r<0||c<0)return;
    PrintMazePath(r-1,c,s+'D');
    PrintMazePath(r,c-1,s+'R') ;
}
int main(){
    cout<<mazePath(2,2)<<endl;
    PrintMazePath(2,2,"");   
}