#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {10, 2, -4, 6, 18, 24, 1, -7,56};
    int k = 3;

    // Methode 1 :- using Built in sort  TC:O(nlogn)
    sort(arr.begin(), arr.end());
    cout << arr[k - 1] << endl;

    //////////////////////////////////////////////////////////////////////////////////

    // Methode 2:- using MIN heaps TC:O(nlogn)
    priority_queue<int, vector<int>, greater<int>> pq1;
    for (int i = 0; i < arr.size(); i++)
    {
        pq1.push(arr[i]);
    }
    for (int i = 1; i < k; i++)
    {
        pq1.pop();
    }
    cout << pq1.top() << endl;

    ///////////////////////////////////////////////////////////////////////////////////

    // Methode 3:- using MAX heap  TC:O(nlogk) The best solution
    priority_queue<int> pq2;
    for (int i = 0; i < arr.size(); i++)
    {
        pq2.push(arr[i]);
        if (pq2.size() > k)
            pq2.pop();
    }
    cout << pq2.top() << endl;
}
