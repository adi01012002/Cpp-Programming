#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void combination(vector<int>arr, vector<int> v, int n, int target, int idx)
{
    if (target == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }
    if (target < 0)
        return;
    for (int i = idx; i < n; i++)
    {
        v.push_back(arr[i]);
        combination(arr, v, n, target - arr[i], i);
        v.pop_back();
    }
}
int main()
{
    // int arr[] = {2,4,5}; // this 
    // int n = sizeof(arr) / sizeof(arr[1]);
    vector<int>arr={2,4,5,3,4,3,2,4,5,3,2,2,3,2,3,5,5};
    //2,4,5,3
    sort(arr.begin(), arr.end());
    // remove duplicates
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    vector<int> v;
    combination(arr, v, arr.size(),8 , 0);
    // int a=max({4,5,9});
    // cout<<a;
}