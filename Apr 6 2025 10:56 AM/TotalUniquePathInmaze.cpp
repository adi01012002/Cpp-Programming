#include<bits/stdc++.h>
using namespace std;
int NoOfPathRec(int a,int b){
    if(a<0||b<0)return 0;
    if(a==0&&b==0)return 1;
    int up=NoOfPathRec(a-1,b);
    int left=NoOfPathRec(a,b-1);
    return up+left;
}
int main(){
    int a=2;
    int b=2;
    cout<<NoOfPathRec(a,b)<<endl;
}