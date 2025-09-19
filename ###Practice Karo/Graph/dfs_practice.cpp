#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> buildAdjancygraph(vector<vector<int>>graph,int n){
    vector<vector<int>>adj(n);

    for(int i=0;i<graph.size();i++){
        adj[graph[i][0]].push_back(graph[i][1]);
        adj[graph[i][1]].push_back(graph[i][0]);
    }
    return adj;
}

void dfs(int node,vector<bool>&visited,vector<vector<int>>adj){
    visited[node]=true;
    for(auto neighbour : adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour,visited,adj);
        }
    }
}
int main(){
    vector<vector<int>>graph={{0,1},{0,2},{1,2},{1,3},{1,4},{2,3},{3,4}};
    vector<vector<int>>adj=buildAdjancygraph(graph,5);
    // for(int i=0;i<adj.size();i++){
    //     cout<<i<<"->";
    //     for(int j=0;j<adj[i].size();j++){
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<bool>visited(5,false);
    int count=0;
    for(int i=0;i<5;i++){
        if(!visited[i]){
            dfs(i,visited,adj);
            count++;
        }
    }
    cout<<count;
}