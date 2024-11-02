#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {3, -4, -7, 30, 7, -9, 2, 1, 6, -1};
    int n = v.size();
    int k = 3;
    //-4,-4 -7,-9-9,-9,0,-1 this should be ans
    vector<int> ans;
    queue<int> q;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
            q.push(i);
    }
    int i = 0;
    while (i + k <= n)
    {
        while (q.size() > 0 && q.front() < i)
            q.pop(); // matlab ye purane window ka first element hoga
        if (q.size() == 0 || q.front() >= i + k)
            ans.push_back(0);
        else
        { // if(q.front()>=i&&q.front()<i+k)
            ans.push_back(v[q.front()]);
        }

        i++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}