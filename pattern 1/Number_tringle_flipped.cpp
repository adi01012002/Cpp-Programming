#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
      for(int i=1;i<=n;i++){
    int k=1;
        for(int j=1;j<=n;j++){
            if((i+j)>n){
                cout<<k;
                k++;
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}