#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>&prices){
    int n=prices.size();
    vector<int>help(n);
    help[n-1]=prices[n-1];
    for(int i=n-2;i>=0;i--){
        help[i]=max(prices[i],help[i+1]);
    }
    int ans=INT16_MIN;
    for(int i=0;i<help.size();i++){
        int diff=help[i]-prices[i];
        ans=max(ans,diff);
    }
    return ans;
}

// One More Methode using stack do on that time
int main(){
    vector<int>prices={7,1,5,3,6,4};
    int ans=maxProfit(prices);
    cout<<ans<<endl;

}