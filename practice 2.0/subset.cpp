#include<bits/stdc++.h>
using namespace std;
void fsub(vector<int> &v,vector<int>s,int i){
    if(i==v.size()-1){
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
        return;
    }
    fsub(v,s,i+1);
    s.push_back(v[i]);
    fsub(v,s,i+1);
}
int main(){
    vector<int>v={1,2,3,4,5,6};
    vector<int>s;
    fsub(v,s,0);


}
