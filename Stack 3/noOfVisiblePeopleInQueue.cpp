#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {10, 6, 8, 5, 11, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    ////////////////////////////// [Leetcode 1944]
    // int n=arr.size();
    vector<int> ans(n, 0);
    stack<int> st;
    st.push(arr[n - 1]);
    ans[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        int count = 0;
        // Pop with count
        while (st.size() > 0 && arr[i] > st.top())
        {
            st.pop();
            count++;
        }
        if (st.size() != 0)
            count++; // VIMP
        ans[i] = count;
        // Push
        st.push(arr[i]);
    }
    // return ans;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}