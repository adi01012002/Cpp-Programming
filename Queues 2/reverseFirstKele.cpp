#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void display(queue<int> q)
{
    for (int i = 0; i < q.size(); i++)
    {
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
}
void reverse(queue<int>&q, int k)
{
    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while (st.size() != 0)
    {
        q.push(st.top());
            st.pop();
    }
    for (int i = 0; i < q.size() - k; i++)
    {
        q.push(q.front());
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    display(q);
    cout<<endl;
    reverse(q, 5);
    display(q);
}