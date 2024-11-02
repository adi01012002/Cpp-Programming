#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    vector<int> arr = {10, 200, -4, 6, 18, 2, 105, 118};
    int k = 3;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
            pq.pop();
    }
    cout << pq.top();
}