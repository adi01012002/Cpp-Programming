#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}
void sum2(int s, int n)
{
    if (n == 0)
    {
        cout << s << endl;

        return;
    }
    sum2(s + n, n - 1);
}
int main()
{
    sum2(0, 5);
}
