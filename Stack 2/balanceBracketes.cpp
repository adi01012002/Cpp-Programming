#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string &s)
{
    int n = s.length();
    if (n % 2 != 0)
        return false;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {

        if (s[i] == '(')
            st.push('(');
        else if (st.size() != 0)
            st.pop();
        else
            return false;
    }
    return true;
}
bool isABalanced(string s)
{
    int n = s.length();
    if (n % 2 != 0)
        return false;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (st.size() == 0)
                return false;
            else
                st.pop();
        }
    }
    if (st.size() == 0)
        return true;
    else
        return false;
}
int main()
{
    string s = "()()()";
    cout << isBalanced(s) << endl;
}
