#include<bits/stdc++.h>
using namespace std;
int fiboRec(int n){
    if(n==0)return 0;
    if(n==1||n==2)return 1;
    return fiboRec(n-1)+fiboRec(n-2);
}

vector<int>dpm;
int fiboMemo(int n){
    if(n==0)return n;
    if(n==1||n==2)return 1;
    if(dpm[n]!=-1)return dpm[n];
    return dpm[n]=fiboMemo(n-1)+fiboMemo(n-2);
}

vector<int>dpt;
int fiboTabu(int n){
    dpt[1]=1;
    for(int i=2;i<=n;i++){
        dpt[i]=dpt[i-1]+dpt[i-2];
    }
    return dpt[n];
}

void fiboLoop(int n){
    int a=0;
    int b=1;
    int c;
    for(int i=0;i<=n;i++){
        if(i<=1){
            c=i;
        }
        else{
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c<<" ";
    }
}
int main(){
    int n=5;
    cout<<fiboRec(n)<<endl;
    dpm.resize(n+1,-1);
    cout<<fiboMemo(n)<<endl;
    dpt.resize(n+1);
    cout<<fiboTabu(n)<<endl;
    fiboLoop(n);

    // 1 1 2 3 5 8
    // 1 1 2 3 5 8
}