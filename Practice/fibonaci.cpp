#include <iostream>
using namespace std;

// using while loop
void fibo(int n)
{
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    while (n - 2 != 0)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        n--;
    }
}

// using for loop
void fibon(int n)
{
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
            c = i;
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << " ";
    }
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    cout<<fib(6);
}