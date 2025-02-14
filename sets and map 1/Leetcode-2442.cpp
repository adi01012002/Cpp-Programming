#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int r=0;
    while(n>0){
        r*=10;
        r+=n%10;
        n/=10;
    }
    return r;
}
int main(){
    unordered_set<int>s;
    vector<int>v={1,13,10,12,31};
    for(int i=0;i<v.size();i++){
        s.insert(v[i]);
        int rev=reverse(v[i]);
        s.insert(rev);
    }
    cout<<s.size();

}