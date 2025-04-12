#include<bits/stdc++.h>
using namespace std;

// Subarray


void SubArray(vector<int>v,vector<int>c,int idx){
    if(idx==v.size()){
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<endl;
        return;
    }
    SubArray(v,c,idx+1);
    if(c.size()==0||v[idx-1]==c[c.size()-1]){
        c.push_back(v[idx]);
        // c.pop_back();
        SubArray(v,c,idx+1);
    }
}


//  SubString  


int i=0;
void  SubString(string s,int st,int end){
    if(end==s.size())return;
    if(st>end){
        SubString(s,0,end+1);
        return;
    }
    cout<<i<<" "<<s.substr(st,end-st+1)<<endl;
    i++;
    SubString(s,st+1,end);
}
int main(){
    // vector<int>v={1,2,3,4};
    // vector<int>c;
    // SubArray(v,c,0);
    SubString("abcde",0,0);
}