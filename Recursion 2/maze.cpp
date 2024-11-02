#include <iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec)
{
    if (sr == er || sc == ec)
        return 1;
    if (sr > er || sc > ec)
        return 0;
    int rightAns = maze(sr, sc + 1, er, ec);
    int leftAns = maze(sr + 1, sc, er, ec);
    return rightAns + leftAns;
}
void printPath(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }
    printPath(sr, sc + 1, er, ec, s + "R"); // right
    printPath(sr + 1, sc, er, ec, s + "D"); // down
}
int main()
{
    printPath(1, 1, 3, 3, "");
    // cout << maze(0, 0, 2, 2);
}