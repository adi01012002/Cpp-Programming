#include<bits/stdc++.h>
using namespace std;

// Factorial
int fact(int n){
    if(n==0)return 1;
    return n*fact(n-1);
}

// Fibonaci
int fibo(int n){
    if(n==0||n==1)return 1;
    return fibo(n-1)+fibo(n-2);
}

// print 1 to n
void print1toN(int n){
    if(n==0)return ;
    print1toN(n-1);
    cout<<n<<" ";
}

// print n to 1
void printNto1(int n){
    if(n==0)return ;
    cout<<n<<" ";
    printNto1(n-1);
}

int getSum(int n){
    if(n==1)return 1;
    return n+getSum(n-1);
}

int pow(int n){
    if(n==0)return 1;
    return 2*pow(n-1);
}
int main(){
    printNto1(5);
    cout<<endl;
    print1toN(5);
    cout<<endl;
    cout<<fact(5);
    cout<<endl;
    cout<<fibo(5)<<endl;
    cout<<getSum(5)<<endl;
    cout<<pow(5)<<endl;
}