#include<bits/stdc++.h>
using namespace std;

int dis(int n,int x){
    if(n==1)return x;
    if(n==2)return x+1;
    return dis(n-1,x)+dis(n-2,x);
}

int dis1(int n,int x){
    if(n==1)return x;
    if(n==2)return x+1;

    int first=x;
    int second=x+1;
    int current=0;
    for(int i=3;i<=n;i++){
        current=first+second;
        first=second;
        second=current;
    }
    return current;
}
int main(){
    int n=5;
    int x=2;
    cout<<dis1(n,x);
}