#include<bits/stdc++.h>
using namespace std;
int naiveStringMatching(string text,string pattern){
    int n=text.size();
    int m=pattern.size();
    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(text[i+j]!=pattern[j]) break;
        }
        if(j==m)return i;
    }
    return -1;
}
int main(){
    string text = "hello world";
    string pattern = "world";   
    int index=naiveStringMatching(text,pattern);
    if(index!=-1){
        cout<<"Pattern found at "<<index<<endl;
    }
    else {
        cout<<"Pattern Not found"<<endl;
    }
    return 0;
}