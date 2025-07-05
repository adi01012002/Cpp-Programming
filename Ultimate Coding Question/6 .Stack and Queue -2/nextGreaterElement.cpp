#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> nextGreaterElement(vector<int>v){
    int n=v.size();
    vector<pair<int,int>>ans(n,{0,0});
    stack<pair<int,int>>st;
    st.push({n-1,v[n-1]});
    for(int i=n-2;i>=0;i--){
        while(!st.empty()&&v[i]>st.top().second){
            st.pop();
        }
        if(st.size()!=0){
            ans[i]=st.top();
        }
        st.push({i,v[i]});
    }
    return ans;
}

// for finding next greater index 

vector<int> nextGreaterElement1(vector<int>v){
    int n=v.size();
    vector<int>ans(n,0);
    stack<int>st;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(!st.empty()&&v[i]>v[st.top()]){
            st.pop();
        }
        if(st.size()!=0){
            ans[i]=st.top()-i;
        }
        st.push(i);
    }
    return ans;
}

// for finding next greater element

vector<int> nextGreaterElement2(vector<int>v){
    int n=v.size();
    vector<int>ans(n,-1);
    stack<int>st;
    st.push(v[n-1]);
    for(int i=n-2;i>=0;i--){
        while(!st.empty()&&v[i]>st.top()){
            st.pop();
        }
        if(st.size()!=0){
            ans[i]=st.top();
        }
        st.push(v[i]);
    }
    return ans;
}
int main(){
    vector<int>v={73,74,75,71,69,72,76,73};
    vector<pair<int,int>>ans=nextGreaterElement(v);
    int n=v.size();
    vector<int>res(n);
    for(int i=0;i<ans.size();i++){
        // cout<<ans[i].first<<" "<<ans[i].second<<endl;
        if(ans[i].first!=0){
            res[i]=ans[i].first-i;
        }
    }
    for(auto it :res){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int>out=nextGreaterElement1(v);
    for(auto it :out){
        cout<<it<<" ";
    }

    cout<<endl;


    vector<int>put=nextGreaterElement2(v);
    for(auto it :put){
        cout<<it<<" ";
    }
    cout<<endl;

}