#include<bits/stdc++.h>
using namespace std;
long long Pow(long long x,long long n){
    if(n==0)return 1;
    long long ans=Pow(x,n/2);
    if(n%2==0)return ans*ans;
    else return ans*ans*x;
}
int main(){
    long long x=2;
    long long n=10;
    cout<<Pow(x,n);
}