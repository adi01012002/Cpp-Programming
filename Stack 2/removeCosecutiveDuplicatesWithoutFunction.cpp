#include <iostream>
#include <stack>
using namespace std;
void print(stack<char> st)
{
    stack<char> temp;
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
    string s = "aaabbcddaabffg";
    cout << s << endl;
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (st.top() != s[i])
            st.push(s[i]);
    }
    print(st);
}