#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{2,3,4,5,4};
    int k=12;
    int st=0;
    int end=0;
    int sum=0;
    while(end<=v.size()){
        sum+=v[end];
        while(sum>k){
            sum-=v[st];
            st++;
        }
        if(sum==k){
            cout<<st+1<<" "<<end+1<<" "<<endl;
            return 0;
        }
        end++;
    }
    cout<<-1;
    return 0;
}