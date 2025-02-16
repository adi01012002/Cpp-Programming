#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
void gcdI(int a,int b){
    int m=min(a,b);
    for(int i=m;i>=2;i--){
        if(a%i==0 && b%i==0)cout<<i<<" ";
    } 2
}

int main(){
    int a=60;
    int b=24;
    cout<<gcd(a,b);
    // gcdI(a,b);
}