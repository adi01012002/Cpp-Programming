#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string> s;
    vector<string> v = {"cd", "ac", "dc", "ca", "zz"};
    // for (int i = i; i < v.size(); i++)
    // {
    //     s.insert(v[i]);
    // }
    // for (auto it : s)
    // {
    //     cout << it << " " << endl;
    // }
    int count = 0;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     string rev = v[i];
    //     reverse(rev.begin(), rev.end());
    //     if (rev != v[i])
    //     {
    //         cout << "yeraha" << endl;
    //         cout << rev << " " << v[i] << endl;
    //         if (s.find(rev) != s.end())
    //         {
    //             cout << "mila" << endl;
    //             count++;
    //             s.erase(v[i]);
    //         }
    //     }
    // }
    // cout << count << endl;
    count=0;
    for (int i = 0; i < v.size(); i++)
    {
        string str = v[i];
        reverse(str.begin(), str.end());
        if (s.find(str) != s.end())
        {
            count++;
        }
        else
        {
            s.insert(v[i]);
        }
    }
    cout << count;
}