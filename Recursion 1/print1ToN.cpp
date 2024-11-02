#include <iostream>
using namespace std;
void print1ToN(int n)
{
    if (n == 0)
        return;
    print1ToN(n - 1);
    cout << n << endl; // print 1 to n
}
void print1ToN2(int n, int i)
{
    if (i > n)
        return;
    cout << i << endl;
    print1ToN2(n, i + 1); // print 1 to n
}

int main()
{
    // print1ToN(10);
}