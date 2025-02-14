#include <bits/stdc++.h>
using namespace std;
int maze(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec)
        return 0;
    if (sr == er && sc == ec)
        return 1;
    int right = maze(sr, sc + 1, er, ec);
    int left = maze(sr + 1, sc, er, ec);
    return right + left;
}
void PrintMaze(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }
    PrintMaze(sr, sc + 1, er, ec, s + "R");  // Right
    PrintMaze(sr + 1, sc, er, ec, s + "D");  // Left 
}
int maze2(int er, int ec)
{
    if (er == 1 || ec == 1)
        return 1;
    if (er < 0 && ec < 0)
        return 0;
    int right = maze2(er, ec - 1);
    int left = maze2(er - 1, ec);
    return right + left;
}
int main()
{
    cout << maze2(2, 2);
    // PrintMaze(0,0,2,2,"");
}