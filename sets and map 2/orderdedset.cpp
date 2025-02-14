#include <iostream>
#include <set>
#include <map>
using namespace std;
int main()
{
    // set<int> s;
    // s.insert(2);
    // s.insert(7);
    // s.insert(3);
    // s.insert(9);
    // s.insert(10);
    // for (auto x : s)
    // {
    //     cout << x << " ";
    // }
    map<string, int> m;
    m["ASanket"] = 52;
    m["Raghav"] = 35;
    m["Aditya"] = 17;
    for (auto x : m)
    {
        cout << x.second << " ";
    }
}
