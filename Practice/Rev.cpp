#include<iostream>
using namespace std;
int rev(int n){ // Parameter
int new_no=0;
while(n>0){
    int r=0;
    r=n%10;
    new_no=(new_no*10)+r;
    n/=10;
}
return new_no;
}
int main(){
    int n;
    cout<<"Enter Your Number";
    cin>>n;
    int rev_no=rev(n); // Argument 
    cout<<rev_no;
}