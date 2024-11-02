#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    vector<string> s = {"flower", "flow", "flight"};
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
    sort(s.begin(), s.end()); // Name->Naem
    cout << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
}