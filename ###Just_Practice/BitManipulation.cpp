#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n=3;
    // int a=n<<1;
    // cout<<a;

    // //

    // int n=3;
    // int a=n&1;
    // cout<<a;

    // int n=3;
    // int a=n^1;
    // cout<<a;


    // int n=3;
    // n=n&(n-1);
    // cout<<n<<" ";
    // n=n&(n-1);
    // cout<<n<<" ";
    // n=n&(n-1);
    // cout<<n<<" ";

    // for counting number of 1's bits
    // int n=5;
    // int c=0;
    // while(n!=0){
    //     n=n&(n-1);
    //     cout<<n<<" ";
    //     c++;
    // }
    // cout<<endl;
    // cout<<c;


    // vector<int>v={1,2,3,4};    // 10+ 1

    // int n=5;
    // vector<int>a(6);
    // a[1]=a[1>>1]+(1 & 1);
    // a[2]=a[2>>1]+(2 & 1);
    // a[3]=a[3>>1]+(3 & 1);
    // a[4]=a[4>>1]+(4 & 1);
    // a[5]=a[5>>1]+(5 & 1);

    // for(int b :a)cout<<b<<" ";


    int n=15;
    int count=0;
    while(n!=0){  // 1111
        count += (n & 1);  // check if last bit is 1  => 1
        n=n>>1;   //  shift bits to right  => 0111
    }
    cout<<count<<endl;


    

}