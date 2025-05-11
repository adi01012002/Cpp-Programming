#include <bits/stdc++.h>
using namespace std;
int count = 0;
int dfs(vector<vector<int>> &adj, int Pnode, int node, int seats,int &count)
{
    int people = 1;
    for (auto neighbour : adj[node])
    {
        if (neighbour == Pnode)
            continue;
        int subpeople = dfs(adj, node, neighbour, seats,count);
        count += ceil((double)subpeople / seats);
        people += subpeople;
    }
    return people;
}
int main()
{
    vector<vector<int>> v = {{0, 1}, {0, 2}, {0, 3}};
    int n=v.size()+1;
    int seats = 5;

    // Creating adjencncy matrix

    vector<vector<int>> adj(n);
    for (int i = 0; i < v.size(); i++)
    {
        int src = v[i][0];
        int dist = v[i][1];
        adj[src].push_back(dist);
        adj[dist].push_back(src);
    }
    // for (int i = 0; i < adj.size(); i++)
    // {
    //     for (auto it : adj[i])
    //     {
    //         cout << it << " ";
    //     }
    //     cout << endl;
    // }
    int count = 0;
    dfs(adj, -1, 0, seats,count);
    cout << count;
}