#include <iostream>
using namespace std;
int maze4(int sr, int sc, int er, int ec)
{
    if (sr == er && sc == ec)
        return 1;
    if (sr > er || sc > ec)
        return 0;
    int rightways = maze4(sr, sc + 1, er, ec);
    int leftways = maze4(sr + 1, sc, er, ec);
    return leftways + rightways;
}
int maze2(int row, int col)
{
    if (row == 1 && col == 1)
        return 1;
    if (row == 0 || col == 0)
        return 0;
    int rightways = maze2(row, col - 1);
    int leftways = maze2(row - 1, col);
    return leftways + rightways;
}
void printMazepath4(int sr, int sc, int er, int ec, string s)
{
    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }
    if (sr > er || sc > ec)
        return;
    printMazepath4(sr, sc + 1, er, ec, s + 'R');
    printMazepath4(sr + 1, sc, er, ec, s + 'D');
}
void printMazepath2(int row, int col, string s)
{
    if (row == 1 && col == 1)
    {
        cout << s << endl;
        return;
    }
    if (row == 0 || col == 0)
        return;
    printMazepath2(row, col - 1, s + 'R');
    printMazepath2(row - 1, col, s + 'D');
}
int main()
{
    cout << maze4(1, 1, 3, 3) << endl;
    printMazepath4(1, 1, 3, 3, "");

    cout << maze2(3, 3) << endl;
    printMazepath2(3, 3, "");
}