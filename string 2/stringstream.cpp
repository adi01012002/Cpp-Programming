#include<iostream>
using namespace std;
#include<vector>
#include<sstream>
int main(){
    string s = "ragav is    a math  teacher";
    stringstream ss(s);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}