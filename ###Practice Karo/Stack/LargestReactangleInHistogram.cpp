#include<bits/stdc++.h>
using namespace std;
auto nextSmallerElement(vector<int>&v){
    int n=v.size();
    vector<int>ans(n);
    stack<int>st;
    st.push(-1);
    for(int i=n-1;i>=0;i--){
        int ele=v[i];
        while(!st.empty()&&v[st.top()]>=ele)st.pop();
        if(st.size()!=0)ans[i]=st.top();
        st.push(i);
    }
    return ans;
}

auto previousSmallerElement(vector<int>&v){
    int n=v.size();
    vector<int>ans(n);
    stack<int>st;
    st.push(-1);
    for(int i=0;i<n;i++){
        int ele=v[i];
        while(!st.empty()&&v[st.top()]>=ele)st.pop();
        if(st.size()!=0)ans[i]=st.top();
        st.push(i);
    }
    return ans;
}

int main(){
    vector<int>height={2,1,5,6,2,3};
    int n=height.size();
    auto next=nextSmallerElement(height);
    auto prev=previousSmallerElement(height);
    int maxArea=INT_MIN;

    for(int i=0;i<height.size();i++){
        int l=height[i];
        if(next[i]==-1)next[i]=n;
        int b=next[i]-prev[i]-1;
        int area=l*b;
        maxArea=max(maxArea,area);
    }
    cout<<maxArea<<endl;

}