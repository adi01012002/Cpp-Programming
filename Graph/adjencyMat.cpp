#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int V, E, a, b;
    cout << "enter number of vertices";
    cin >> V;
    cout << "enter number of vertices";
    cin >> E;
    vector<int> adj[V];
    for (int j = 0; j < E; j++)
    {
        cout << "enter the vertices of edge" << j + 1;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 0; i < V; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j] << ",";
        }
        cout << endl;
    }
}