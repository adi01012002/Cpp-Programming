#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        set<pair<int,int>>st;
        vector<vector<int>>res;
        for(int i=0;i<n;i++){
            st.insert({v[i],i});
        }
        while(!st.empty()){
            auto mini=*st.begin();
            auto maxi=*st.rbegin();

            if(maxi.first==mini.first)break;

            if(mini.first==1){
                cout<<-1<<endl;
                return -1;
            }
            st.erase(maxi);
            // int val=ceil(maxi.first/mini.first);
            int val = (maxi.first + mini.first - 1) / mini.first;
            st.insert({val,maxi.second});
            // st.erase(maxi);
            res.push_back({maxi.second+1,mini.second+1});

            
        }
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }


    }
}