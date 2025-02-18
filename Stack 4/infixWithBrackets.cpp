#include <bits/stdc++.h>
using namespace std;
int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}
int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}
int main()
{
    // string s = "(2+6)*4/8-3";
    string s="(7+9)*4/8-3";
    // cout<<s<<endl;
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))val.push(s[i] - '0'); // digit

        else{ // not digit
            if (op.size() == 0) op.push(s[i]);
            else if (s[i] == '(') op.push(s[i]);
            else if (op.top() == '(') op.push(s[i]);
            else if (s[i] == ')'){ // work
                while (op.top() != '('){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if (prio(s[i]) > prio(op.top()))op.push(s[i]);
            else{
                while (op.size() > 0 && prio(s[i]) <= prio(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    // the op can have some value
    // so make it empty
    while (op.size() > 0)
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout << val.top()<<endl;
    cout<<(7+9)*4/8-3;
}