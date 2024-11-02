#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
int main()
{
    vector<int> v = {5,3,1,1,1,3,7,3,1};
    int k = 4;
    vector<int> ans;
    unordered_map<int, int> m;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }
    for (auto x : m)
    {
        int f = x.second;
        pq.push(f);
        if (pq.size() > k)
            pq.pop();
    }
    for (auto x : m)
    {
        int f = x.second;
        if (f == pq.top())
        {
            ans.push_back(x.first);
            pq.pop();
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}