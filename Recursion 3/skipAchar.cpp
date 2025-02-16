#include<bits/stdc++.h>
using namespace std;
void removeChar(string ans,string s){
    if((s.length()==0)){
        cout<<ans;
        return;
    }
    char ch=s[0];
    if(ch=='a') removeChar(ans,s.substr(1));
    else removeChar(ans+ch,s.substr(1));
}

void removeChar(string ans,string s,int idx){
    if((s.length()==idx)){
        cout<<ans;
        return;
    }
    char ch=s[idx];
    if(ch=='a') removeChar(ans,s,idx+1);
    else removeChar(ans+ch,s,idx+1);
}
void removeOne(vector<int>&ans,vector<int>&v,int idx){
    if(idx==v.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return;
    }
    int a=v[idx];
    if(a==1)removeOne(ans,v,idx+1);
    else {
        ans.push_back(a);  // Modify a local copy
        removeOne(ans, v, idx + 1);
    }
}
int main(){
    // string s="dsafvacvad";
    // removeChar("",s,0);
    vector<int>v={1,2,3,1,7,3,1,4,1,1,3,1,6,1};
    vector<int>ans;
    removeOne(ans,v,0);
}