#include <iostream>
using namespace std;
int stair2(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return stair2(n - 1) + stair2(n - 2);
}
int stair3(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    return stair3(n - 1) + stair3(n - 2) + stair3(n - 3);
}
int main()
{
    cout << stair3(4);
}