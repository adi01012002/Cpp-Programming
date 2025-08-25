#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4};
    // bool flag=false;
    // for(int i=0;i<v.size();i++){
    //     for(int j=i+1;j<v.size();j++){
    //         if(v[i]==v[j]){
    //             flag=true;
    //             break;
    //         }
    //     }
    //     if(flag)break;
    // }
    // if(flag) cout<<boolalpha<<true;
    // else cout<<boolalpha<<false;

    unordered_set<int>st;
    bool flag=false;
    for(int i=0;i<v.size();i++){
        if(st.find(v[i])!=st.end()){
            flag=true;
        }
        st.insert(v[i]);
    }
    if(flag)cout<<boolalpha<<true;
    else cout<<boolalpha<<false;
}