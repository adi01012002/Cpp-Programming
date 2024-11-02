#include <iostream>
using namespace std;
#include <algorithm>
int main(){
    string s;
    cin>>s;
    getline(cin,s); // aditya sharma is student->   aaaaddehiimnrssstttuy
    sort(s.begin(),s.end()); //Name->Naem
    cout<<s;

    // char ch =' ';
    // cout<<(int)ch;
}