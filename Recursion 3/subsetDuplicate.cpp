#include<bits/stdc++.h>
using namespace std;
void storeSubset(string ans,string org,vector<string>&v,bool flag){
    if(org==""){
        v.push_back(ans);
        return ;
    }
    char ch=org[0];
    if(org.size()==1){
        if(flag==true)storeSubset(ans+ch,org.substr(1),v,true);
        storeSubset(ans,org.substr(1),v,true);
        return;
    }
    char dh=org[1];
    if(ch==dh){
        if(flag==true)storeSubset(ans+ch,org.substr(1),v,true);
        storeSubset(ans,org.substr(1),v,false);
    }
    else {
        if(flag==true)storeSubset(ans+ch,org.substr(1),v,true);
        storeSubset(ans,org.substr(1),v,true);
    }

}
int main(){
    string str="aab";
    vector<string> v;
    storeSubset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}