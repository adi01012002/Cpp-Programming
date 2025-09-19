#include<bits/stdc++.h>
using namespace std;
int main(){
//     int a[]={5,1,15,5};
//     int i,j,m;
//     i=++a[1];    /// first increase the a[1] then assign to i
//     cout<<i<<" "<<a[1];   // 2 2
//     cout<<endl;
//     j=a[1]++;   // first a[1] assign to j then increase a[1]
//     cout<<i<<" "<<a[1]<<" "<<j<<endl;   // 2 3 2
//     m=a[i++];   // first a[i] assign to m then increase i
//     cout<<m<<endl;
//     cout<<a[1]<<" "<<i<<endl;

    // int a=1;
    // while(++a<=5){
    //     cout<<a++<<" ";
    // }

    int arr[3]={1,2,4};
    // cout<<arr<<" "<<&arr<<" "<<endl;
    // cout<<*(arr)<<" "<<&arr+1<<" ";
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<" ";
    }


}