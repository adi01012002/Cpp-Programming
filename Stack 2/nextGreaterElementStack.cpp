#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int arr[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Using Stack : pop,ans,push and traverse in reverse order
    // SC = O(n) TC = O(n)
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int nge[n];
    stack<int> st;
    nge[n - 1] = -1;
    st.push(arr[n - 1]);
    // 3,1,2,7,4,6,2,3
    for (int i = n - 2; i >= 0; i--)
    {
        // pop all the elements smaller than arr[i]
        while (st.size() > 0 && st.top() <= arr[i])
            st.pop();
        // Mark the ans in nge array
        if (st.size() == 0)
            nge[i] = -1;
        else
            nge[i] = st.top();
        // Push the arr[i];
        st.push(arr[i]);
    }
    // int nge[n];
    // stack<int> st;
    // nge[n - 1] = -1;
    // st.push(arr[n - 1]);
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     // Pop all the elements less than arr[i]
    //     while (st.size() > 0 && st.top() <= arr[i])
    //         st.pop();
    //     if (st.size() == 0)
    //         nge[i] = -1;
    //     else
    //         nge[i] = st.top();
    //     st.push(arr[i]);
    // }
    for (int i = 0; i < n; i++)
    {
        cout << nge[i] << " ";
    }
    cout << endl
         << st.size() << " " << st.top();
    st.pop();
    cout << endl
         << st.size() << " " << st.top();
    st.pop();
    cout << endl
         << st.size() << " " << st.top();
}