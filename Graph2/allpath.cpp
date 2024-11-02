#include <iostream>
#include <list>
#include <vector>
#include <unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> res;
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
void dfs(int curr, int end, vector<int> &path)
{
    if (curr == end)
    {
        path.push_back(curr);
        res.push_back(path);
        path.pop_back();
        return;
    }
    visited.insert(curr); // mark visited
    path.push_back(curr);
    for (auto neighbour : graph[curr])
    {
        if (visited.find(neighbour) == visited.end())
        {
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}
void all_path(int src, int dest)
{
    vector<int> path;
    return dfs(src, dest, path);
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
    // dispaly();
    int x, y;
    cin >> x >> y;
    all_path(x, y);
    for(auto path: res){
        for(auto el:path){
            cout<<el<<",";
        }
        cout<<endl;
    }
}