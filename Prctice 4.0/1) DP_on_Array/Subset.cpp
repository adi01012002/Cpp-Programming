#include<bits/stdc++.h>
using namespace std;
void subset(vector<int>v,vector<int>&t,int idx){
    if(idx==v.size()){
        cout<<"->";
        for(int i=0;i<t.size();i++){
            cout<<t[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    subset(v,t,idx+1);
    t.push_back(v[idx]);
    subset(v,t,idx+1);
    //t.pop_back();   //  uncomment when t is pass by reference 
                       //  because we use same array for whole recurison
}
int main(){
    vector<int>v={1,2,3};
    vector<int>t;
    subset(v,t,0);
}