#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {6, 5, 3, 2, 8, 10, 9};  // k=3
    // vector<int> arr = {10, 9, 8, 7, 4, 70, 60, 50}; // k=4
    int k = 3;
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> pq;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     pq.push(arr[i]);
    //     if (pq.size() > k)
    //     {
    //         int top = pq.top();
    //         ans.push_back(top);
    //         pq.pop();
    //     }
    // }
    // while (pq.size() != 0)
    // {
    //     int top = pq.top();
    //     ans.push_back(top);
    //     pq.pop();
    // }
    int idx = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);
        if (pq.size() > k)
        {
            int top = pq.top();
            arr[idx] = top;
            idx++;
            pq.pop();
        }
    }
    while (pq.size() != 0)
    {
        int top = pq.top();
        arr[idx] = top;
        idx++;
        pq.pop();
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}