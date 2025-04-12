#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cuttoff=v[k-1];
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >=cuttoff && v[i]!=0)
            ans++;
    }
    cout << ans;
    return 0;
}