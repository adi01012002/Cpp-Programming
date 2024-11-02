#include <iostream>
using namespace std;
int stair(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return stair(n - 1) + stair(n - 2);
}
int stair2(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 4;
    return stair2(n - 1) + stair2(n - 2) + stair2(n - 3);
}
int main()
{
    // cout<<stair(6);
    cout << stair2(4);
}