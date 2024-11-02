#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void display(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        int x = q.front();
        q.pop();
        q.push(x);
    }
    cout << endl;
}
void reverseK(int k,queue<int> &q){
    stack<int> st;
    int size =q.size();
    for (int i = 0; i < k; i++)
    {
        int x = q.front();
        st.push(x);
        q.pop();
    }
    // cout<<size;
    while (!st.empty())
    {
        int x = st.top();
        q.push(x);
        st.pop();
    }
    for (int i = 0; i < size - k; i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
int main()
{
    queue<int> q;
    stack<int> st;
    int k = 2;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverseK(k,q);
    display(q);
}