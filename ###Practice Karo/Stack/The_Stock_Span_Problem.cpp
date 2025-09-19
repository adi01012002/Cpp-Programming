#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>stockSpanProblem(vector<int>stock){
        int n=stock.size(); 
        vector<int>ans(n);
        ans[0]=1;
        stack<int>st;
        st.push(-1);
        for(int i=0;i<n;i++){
            int ele=stock[i];
            while(!st.empty()&&stock[st.top()]<ele)st.pop();
            if(!st.empty()) ans[i]=i-st.top();
            else ans[i]=i+1;
            st.push(i);
        }
        return ans;
    }
};

int main(){
    // 100, 80, 60, 70, 60,  75, 85
    //  0   0   1   1   3    1    0 
    //  1   1   1   2   1    4    6

    vector<int>v={100, 80, 60, 70, 60,  75, 85};
    Solution sol;
    auto ans=sol.stockSpanProblem(v);
    for(int it:ans)cout<<it<<" ";


}