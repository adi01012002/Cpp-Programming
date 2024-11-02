#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    priority_queue<pair<int, int>> pq;
    vector<int> v = {1,1,2,3,4,5};
    int x=-1;
    int k = 4;
    for (int i = 0; i < v.size(); i++)
    {
        int dis = abs(x - v[i]);
        pq.push({dis, v[i]});
        if (pq.size() > k)
            pq.pop();
    }
    while (!pq.empty())
    {
        auto el = pq.top();
        cout << el.second << " ";
        pq.pop();
    }
}