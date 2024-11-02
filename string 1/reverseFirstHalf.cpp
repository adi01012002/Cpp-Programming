#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // Reverse First half
    int len=s.length();
    cout<<s<<endl;
    reverse(s.begin(),s.begin()+len/2);
    cout<<s<<endl;

}