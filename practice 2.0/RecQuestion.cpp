// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void print1toN(int n){
    if(n==0)return;
    print1toN(n-1);
    cout<<n<<endl;
    
}
int fibo(int n){
    if(n==1||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
void sum1toN(int sum,int n){
    if(n==0){
        cout<<sum;
        return;
    }
    sum1toN(sum+n,n-1);
}
int fact(int n){
    if(n==0)return 1;
    return n*fact(n-1);
}
int pow(int a,int b){
    if(b==0)return 1;
    return a*pow(a,b-1);
}
int main() {
    // cout<<fibo(8);
    // sum1toN(0,4);
//   cout<<fact(5);
cout<<pow(2,5);

    return 0;
}