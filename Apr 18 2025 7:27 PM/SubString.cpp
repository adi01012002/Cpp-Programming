#include<bits/stdc++.h>
using namespace std;
void SubString(string org){
    for(int i=0;i<org.size();i++){
        // cout<<org.substr(i)<<endl;
        string sub="";
        for(int j=i;j<org.size();j++){
            sub+=org[j];
            cout<<"           "<<sub<<endl;
        }
    }
}
void SubStr(string org){
    int n=org.size();
    for(int i=0;i<n;i++){
        for(int len=1;len<=n-i;len++){
            cout<<"           "<<org.substr(i,len)<<endl;
        }
    }
}

void SubString0(string_view org){
    int n=org.size();
    for(int i=0;i<n;i++){
        for(int len=1;len<=n-i;len++){
            cout<<"           "<<org.substr(i,len)<<endl;
        }
    }
}

void SubStringRec(string org,int start,int end){
    if(end==org.size())return;
    if(start>end){
        SubStringRec(org,0,end+1);
        return;
    }
    cout<<"           "<<org.substr(start,end-start+1)<<endl;
    SubStringRec(org,start+1,end);
}




void generateSubstrings(string s, int start, int end) {
    if (start == s.size()) return; 
    if (end == s.size() + 1) {
        generateSubstrings(s, start + 1, start + 1); // move to next start
        return;
    }
    cout << s.substr(start, end - start) << endl;
    generateSubstrings(s, start, end + 1); // extend end
}


int main(){
    string org="abc";
    cout<<"<------ Extra Space ------->"<<endl;
    SubString(org);
    cout<<"<------ Minimal Copy ------->"<<endl;
    SubStr(org);
    cout<<"<------- No Copy ----------->"<<endl;
    SubString0(org);
    cout<<"<------- Recursion --------->"<<endl;
    SubStringRec(org,0,0);
    cout<<"<------- Another Method --------->"<<endl;
    generateSubstrings(org,0,1);


}