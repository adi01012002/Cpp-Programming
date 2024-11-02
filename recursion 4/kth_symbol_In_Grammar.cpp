#include<iostream>
using namespace std;
int grammar(int n,int k){
    if(n==1) return 0;
    if (k%2==0){
      int prevAns=grammar(n-1,k/2);
      if(prevAns==0) return 1;
      else{
        return 0;}
    }
    else return grammar(n-1,k/2+1);
    
}
int main(){
    int n=2;
    int k=1;
    cout<<grammar(n,k)<<endl;
    
} 