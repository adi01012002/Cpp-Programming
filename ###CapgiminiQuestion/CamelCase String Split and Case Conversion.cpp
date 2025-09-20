#include<bits/stdc++.h>
using namespace std;
void splitCamelCase(string s){
    string word="";
    for(int i=0;i<s.size();i++){
        char c=s[i];

        if(isupper(c)&&!word.empty()){
            cout<<word<<" ";
            word="";
        }
        if(islower(c)){
            word+=toupper(c);
        }
        else{
            word+=tolower(c);
        }
    }
    if(!word.empty())cout<<word<<endl;
}
int main(){
    string s="whatIsYourName";
    splitCamelCase(s);



}