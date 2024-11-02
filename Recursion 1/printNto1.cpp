#include <iostream>
using namespace std;
void printNto1(int n)
{
    if (n == 0)
        return;
    cout << n << endl; // print n to 1
    printNto1(n - 1);
}
int main()
{
    printNto1(10);
}