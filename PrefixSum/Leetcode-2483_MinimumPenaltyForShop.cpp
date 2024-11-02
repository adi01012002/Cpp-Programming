#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s="YYNY";
    int n=s.size();
    vector<int>p(n+1,0);
    vector<int>su(n+1,0);
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='N')count++;
        p[i+1]=count;
    }
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    count=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='Y')count++;
        su[i]=count;
    }
    for(int i=0;i<p.size();i++){
        cout<<su[i]<<" ";
    }

}