#include <iostream>
#include <list>
#include <vector>
#include <unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
int v;
void add_edge(int src, int dest, bool bi_dir = true)
{
    graph[src].push_back(dest);
    if (bi_dir)
        graph[dest].push_back(src);
}
void dispaly()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << "->";
        for (auto el : graph[i])
        {
            cout << el << ",";
        }
        cout << endl;
    }
}
void dfs(int node, unordered_set<int> &visited)
{
    visited.insert(node);
    for (auto neighbour : graph[node])
    {
        if (not visited.count(neighbour))
        {
            dfs(neighbour, visited);
        }
    }
}
int connected_component()
{
    int result = 0;
    unordered_set<int> visited;
    for (int i = 0; i < v; i++)
    {
        // go to every vertex
        // if we can initialise a dfs , we got one more cc
        if (visited.count(i) == 0)
        {
            result++;
            dfs(i, visited);
        }
    }
    return result;
}
int main()
{
    cin >> v;
    graph.resize(v, list<int>());
    int e;
    cin >> e;
    visited.clear();
    while (e--)
    {
        int src, dest;
        cin >> src >> dest;
        add_edge(src, dest);
    }
    cout << connected_component() << endl;
}