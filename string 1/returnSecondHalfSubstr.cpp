#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string";
    getline(cin,s);
    int len = s.length();
    cout<<s.substr(0,len/2)<<endl;
    cout<<s.substr(len/2);
}