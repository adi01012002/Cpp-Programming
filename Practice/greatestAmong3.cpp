#include <iostream>
using namespace std;
int main()
{
    int a = 12, b = 18, c = 16;
    int ans = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout<<ans;
}