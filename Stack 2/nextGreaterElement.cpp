#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // vector<int> v = {3, 1, 2, 7, 4, 6, 2, 3};
    // int n = v.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    // vector<int> ans;
    // // int a=-1;
    // for (int i = 0; i < n; i++)
    // {
    //     //  ans[i]=
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[j] > v[i])
    //         {
    //             // ans[i] = v[j];
    //             ans.push_back(v[j]);
    //             break;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << ans[i] << " ";
    // }

    int arr[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Next Greater Element

    // Brute Force :TC=O(n^2) ,SC=O(1)
    int nge[n];
    for (int i = 0; i < n; i++)
    {
        nge[i] = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                nge[i] = arr[j];
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }
}