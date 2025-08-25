#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>>&graph,vector<bool>&visited){
    visited[node]=true;
    for(auto neighbour : graph[node]){
        if(!visited[neighbour]){
            dfs(neighbour,graph,visited);
        }
    }
}

int CountComponent(int n,vector<vector<int>>&edges){
    vector<vector<int>>graph(n);
    for(int i=0;i<edges.size();i++){
        int src=edges[i][0];
        int dis=edges[i][1];
        graph[src].push_back(dis);
        graph[dis].push_back(src);
    }

    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<bool>visited(n,false);
    int count=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i,graph,visited);
            count++;
        }
    }
    return count;
}

int main(){
    int n=5;
    vector<vector<int>>edges={{0,1},{1,2},{3,4}};
    cout<<CountComponent(n,edges);
}