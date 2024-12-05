#include <bits/stdc++.h>
using namespace std;
// void printPath(int sr,int sc,vector<vector<int>> &v, string s, vector<vector<bool>> &visi)
void printPath(int sr, int sc, vector<vector<int>> &v, string s, vector<vector<bool>> &visi) 
{
    int er = v.size() - 1;
    int ec = v[0].size() - 1;
    if (sr < 0 || sc < 0 || sr > er || sc > ec || visi[sr][sc])
        return;
    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }
    visi[sr][sc] = true;
    printPath(sr,sc+1 ,v, s + "R", visi); // right
    printPath(sr+1,sc,v, s + "D", visi); // down
    printPath(sr,sc-1,v, s + "L", visi); // left
    printPath(sr-1,sc,v, s + "U", visi); // down
    visi[sr][sc] = false;
}
int main()
{
    vector<vector<int>> v = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};
   vector<vector<bool>> visited(v.size(), vector<bool>(v[0].size(), false));
//    vector<vector<bool>> visited(v.size(), vector<bool>(v[0].size(), false));
    printPath(0,0,v, "", visited);
    //  printPath(0, 0, v, "", visited);
    return 0;
    // printPath(1, 1, 3, 3, "");
    // cout << maze(0, 0, 2, 2);
}
// #include <iostream>
// #include <vector>
// using namespace std;

// // Recursive function to find paths
// void printPath(int sr, int sc, vector<vector<int>> &v, string s, vector<vector<bool>> &visi) {
//     int er = v.size() - 1;      // End row
//     int ec = v[0].size() - 1;   // End column

//     // Out-of-bounds or invalid cell or already visited
//     if (sr < 0 || sc < 0 || sr > er || sc > ec || v[sr][sc] == 0 || visi[sr][sc])
//         return;

//     // If destination is reached
//     if (sr == er && sc == ec) {
//         cout << s << endl;
//         return;
//     }

//     // Mark current cell as visited
//     visi[sr][sc] = true;

//     // Move in all 4 directions
//     printPath(sr, sc + 1, v, s + "R", visi); // Move Right
//     printPath(sr + 1, sc, v, s + "D", visi); // Move Down
//     printPath(sr, sc - 1, v, s + "L", visi); // Move Left
//     printPath(sr - 1, sc, v, s + "U", visi); // Move Up

//     // Backtrack: unmark the cell
//     visi[sr][sc] = false;
// }

// int main() {
//     // Input maze
//     vector<vector<int>> v = {
//         {1, 0, 0, 0},
//         {1, 1, 0, 1},
//         {1, 1, 0, 0},
//         {0, 1, 1, 1}
//     };

//     // Visited array
//     vector<vector<bool>> visited(v.size(), vector<bool>(v[0].size(), false));

//     // Call the function from (0, 0)
//     printPath(0, 0, v, "", visited);

//     return 0;
// }
