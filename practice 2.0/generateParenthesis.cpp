#include<bits/stdc++.h>
using namespace std;
void parenthesis(int noo,int noc,int n,string s){
    if(noc>noc)return;
    else if(noc>n||noo>n)return;
    else if(noc==n&&noo==n){
        cout<<s<<endl;
        return;
    }
    if(noo!=n) parenthesis(noo+1,noc,n,s+'(');
    if(noo>noc) parenthesis(noo,noc+1,n,s+')');
    // parenthesis(noo+1,noc,n,s+'(');
    // parenthesis(noo,noc+1,n,s+')');
}
int main(){
    int n=3;
    parenthesis(0,0,n,"");
}