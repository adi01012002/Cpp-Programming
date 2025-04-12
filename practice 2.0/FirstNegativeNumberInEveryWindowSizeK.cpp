#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,-3,4,4,7,1,4,-2,6};
    int pnI=-1;
    int k=2;
    int n=v.size();
    vector<int>ans;
    for(int i=0;i<k;i++){
        if(v[i]<0){
            pnI=i;
            break;
        }
    }
    if(pnI==-1)ans.push_back(0);
    else ans.push_back(v[pnI]);
    int st=1;
    int end=k;
    while(end<v.size()){
        if(pnI>=st&&pnI<=end){
            ans.push_back(v[pnI]);
        }
        else{
            bool flag=false;
            for(int i=st;i<=end;i++){
                if(v[i]<0){
                    flag=true;
                    pnI=i;
                    break;
                }
            }
            if(flag) ans.push_back(v[pnI]);
            else ans.push_back(0);
        }
        st++;
        end++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<ans.capacity();
}