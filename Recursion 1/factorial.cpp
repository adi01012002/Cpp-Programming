#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
        cout<<f<<endl;
    }
    return 0;
}
void factupto(int n)
{
    for (int j = 1; j <= n; j++)
    {
        int f = 1;
        for (int i = 2; i <= j; i++)
        {
            f = f * i;
        }
        cout << f << endl;
    }
}
int recfact(int n){
    if(n==1||n==0) return 1;
    return recfact(n-1)*n;
}
int main()
{
    // cout << fact(5) << endl;
    // factupto(9);
    cout<<recfact(0)<<endl;
}