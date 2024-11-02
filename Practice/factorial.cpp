#include <iostream>
using namespace std;

// brute force TC=>O(N**2)
void fact(int n)
{
    int f;
    for (int i = 1; i <= n; i++)
    {
        f = 1;
        for (int j = 2; j <= i; j++)
        {
            f = f * j;
        }
        // cout<<f<<endl;
    }
    cout << f << endl;
}
// Using one loop TC=>O(N)
void fact1(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f = f * i;
        cout << f << endl;
    }
    //  cout<<f<<endl;
}

// Using recursion=>
int fact2(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return fact2(n - 1) * n;
}
int main()
{
    cout << fact2(5);
}
