#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>dailyTemperatures(vector<int>temp){
        int n=temp.size();
        vector<int>ans(n);
        stack<int>st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            int ele=temp[i];
            while(st.size()!=0&&temp[st.top()]<=ele)st.pop();
            if(st.size()!=0)ans[i]=st.top()-i;
            st.push(i);
        }
        return ans;

    }

};

int main(){
    vector<int>v={73,74,75,71,69,72,76,73};
    Solution sol;
    auto ans=sol.dailyTemperatures(v);
    for(int it :ans)cout<<it<<" ";

}