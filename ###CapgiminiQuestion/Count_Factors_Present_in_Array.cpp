#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2, 3, 4, 6};
    int count=0;
    unordered_set<int>st(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        for(int j=1;j<=sqrt(v[i]);j++){ // j<=sqrt(v[i]) or j<=v[i]
            int num=v[i];                       //               |
            if(num%j==0){                      //                |
                if(st.count(j))count++;       //               \_|_/
                if(j != num/j && st.count(num/j)) count++;  // then comment this line
            }
        }
    }
    cout<<count;
}