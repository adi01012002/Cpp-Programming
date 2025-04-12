#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){ // longest Division Methode
    if(a==0)return b;
    return gcd(a/b,a);
}
int main(){
    int a=12;
    int b=24;
    for(int i=min(a,b);i>=2;i--){   // Iterative methode
        if(a%i==0&&b%i==0){
            cout<<i;
            break;
        }
    }
    cout<<endl;
    int g=gcd(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<g<<endl;
    int lcm=(a*b)/g;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm<<endl;
}