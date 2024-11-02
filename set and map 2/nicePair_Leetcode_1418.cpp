#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int rev(int n)
{
    int num = 0;
    while (n > 0)
    {
        int rem = n % 10;
        num = num * 10 + rem;
        n /= 10;
    }
    return num;
}
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int combi(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int main()
{
    unordered_map<int, int> mp;
    vector<int> v = {13,10,35,24,76};
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        v[i] -= rev(v[i]);
    }
    for (auto el : v)
    {
        mp[el]++;
    }
    int count = 0;
    for (auto el : mp)
    {
        int f = el.second;
        count += combi(f, 2);
    }
    cout << count;


    //// Second Method available in Leetcode
}
