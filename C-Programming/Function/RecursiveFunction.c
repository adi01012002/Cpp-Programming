#include <stdio.h>
int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return (n * fact(n - 1));
}
int gcd(int a, int b)
{
    int rem = a % b;
    if (rem == 0)
        return b;
    else
        return gcd(b, a % b);
}
int fibo(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}
int main()
{

    /// Factorial of A number
    int n;
    scanf("%d", &n);
    int FACT = fact(n);
    printf("%d\n", FACT);

    // / GCD Of Two Number
    int a = 62, b = 8;
    int GCD = gcd(a, b);
    printf("%d", GCD);

    /// Fibonacci Series
    int FIBO = fibo(6);
    printf("%d", FIBO);
}