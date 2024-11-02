#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "Enter String";
    getline(cin, s);
    sort(s.begin(), s.end());
    int n = s.size();
    int count = 1;
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            count++;
        else
        {
            cout << count << "->" << s[i] << endl;
            max_count = max(count, max_count);
            count = 1;
        }
    }
    cout << max_count;
}