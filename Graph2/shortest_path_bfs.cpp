#include <iostream>
#include <list>
#include <vector>
#include <queue>
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
void bfs(int src, int dest, vector<int> &dist)
{
    queue<int> qu;
    // visited.clear();
    dist.resize(v, INT16_MAX);
    dist[src] = 0;
    qu.push(src);
    visited.insert(src);
    while (qu.size() != 0)
    {
        int curr = qu.front();
        cout<<curr<<" ";
        qu.pop();
        for (auto neighbour : graph[curr])
        {
            if(not visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]=dist[curr]+1;
            }
        }
    }
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
    vector<int>v;
    bfs(x,y,v);
    for(int i=0;i<v.size();i++){
        cout<<i<<"->"<<v[i]<<" ";
        cout<<endl;
    }

}