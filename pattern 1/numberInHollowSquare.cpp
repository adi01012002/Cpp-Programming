#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i==1||i==4) cout<<j<<" ";
            else if(j==1) cout<<j<<" ";
            else if(j==4) cout<<j<<" ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}