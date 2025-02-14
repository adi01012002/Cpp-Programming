#include <bits/stdc++.h>
using namespace std;
vector<int> h;
vector<int> dp;
int k;
int frog(int i)
{
    if (i >= h.size())
        return INT16_MAX;
    if (i == h.size() - 1)
        return 0; // last stone
    int ans = INT16_MAX;
    if (dp[i] != -1)
        return dp[i];
    for (int j = 1; j <= k; j++)
    {
        if (i + j >= h.size())
            break;
        ans = min(ans, abs(h[i] - h[i + j]) + frog(i + j));
    }
    return dp[i] = ans;
}
int fbu()
{
    int n = h.size();
    dp.resize(100005,INT16_MAX);
    dp[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i + j >= h.size())
                break;
            dp[i] = min(dp[i], abs(h[i] - h[i + j]) + dp[i + j]);
        }
    }
    return dp[0];
}

int main()
{
    int n;
    cin >> n >> k;
    h.resize(n);
    // dp.resize(n, -1); comment for fbu function
    for (int i = 0; i < n; i++)
        cin >> h[i];
    cout << fbu();
    return 0;
}
