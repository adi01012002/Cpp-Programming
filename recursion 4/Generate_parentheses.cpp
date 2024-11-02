#include <iostream>
#include <string>
#include <vector>
using namespace std;
void bracket(string str, int open, int close, int n)
{
    if (close == n)
    {
        cout << str << endl;
        return;
    }
    if (open != n)
        bracket(str + "(", open + 1, close, n);
    if (open > close)
        bracket(str + ")", open, close + 1, n);
}
int main()
{
    int n = 4;
    vector<string> s;
    bracket("", 0, 0, n);
}