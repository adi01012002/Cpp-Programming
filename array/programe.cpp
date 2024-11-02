#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
int fact(int n){
  //base case
  if(n==1||n==0) return 1;
  //recursive call
  int x = n*fact(n-1);
  cout<<x<<endl;
  return x;
  
}
int main()
{
  int n;
  cout<<"Enter n:";
  cin>>n;
  cout<<fact(n);
}