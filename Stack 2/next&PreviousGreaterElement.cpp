#include <iostream>
using namespace std;
#include <stack>
int main()
{
    int arr[] = {3, 1, 2, 7, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // int nge[n];
    int pge[n];
    stack<int> st;
    // nge[n - 1] = -1;
    pge[0] = -1;
    // st.push(arr[n - 1]);
    st.push(arr[0]);
    // for (int i = n - 2; i >= 0; i--)
    for (int i = 0; i<n; i++)
    {
        while (st.size() > 0 && st.top() <= arr[i])
            st.pop();
        if (st.size() == 0)
            // nge[i] = -1;
            pge[i] = -1;
        else
            // nge[i] = st.top();
            pge[i] = st.top();
        st.push(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // cout << nge[i] << " ";
        cout << pge[i] << " ";
    }

    // output => 7 2 7 -1 6 -1 3 -1 NEXT GREATER ELEMENT
    // output => -1 3 3 -1 7 7 6 6 PREVIOUS GREATER ELEMENT

}