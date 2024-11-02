#include<iostream>
using namespace std;
int main(){
    string s="abcdef";
    cout<<s.substr(0)<<endl; 
    cout<<s.substr(2)<<endl; 
    // s.substr(idx,length to obtain)

    cout<<s.substr(3)<<endl; //def
    cout<<s.substr(1,3)<<endl; //bcd
    cout<<s.substr(2,2)<<endl; //cd

}