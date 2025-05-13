#include <bits/stdc++.h>
using namespace std;
int StairCase(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return StairCase(n-1)+StairCase(n-2);
}
int main()
{
    int n = 5;
    cout << StairCase(n);
}