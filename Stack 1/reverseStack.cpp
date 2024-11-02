#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> st)
{
    stack<int> temp;
    while (st.size() > 0)
    {
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    while (temp.size() > 0)
    {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.top() << endl;
    print(st);
    cout << endl;
    // cout << st.size() << endl;
    // Reverse stack in same stack

    stack<int> rt;
    stack<int> gt;
    while (st.size() > 0)
    {
        rt.push(st.top());
        st.pop();
    }
    while (rt.size() > 0)
    {
        gt.push(rt.top());
        rt.pop();
    }
    while (gt.size() > 0)
    {
        st.push(gt.top());
        gt.pop();
    }
    cout << st.top() << endl;
    print(st);
}