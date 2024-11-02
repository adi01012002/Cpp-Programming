#include <iostream>
using namespace std;
int main(){   int n;
    cout<<"Enter n";
    cin>>n;
    //   for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // other Concept to solve this problem is ;
    // row number + number of star = n + 1;
    // no of star =n+1-i;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }}