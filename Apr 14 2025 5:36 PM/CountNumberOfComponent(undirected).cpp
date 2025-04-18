#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>createAdj(int n,vector<vector<int>>edge){
    vector<vector<int>>graph(n);
    for(int i=0;i<edge.size();i++){
        graph[edge[i][0]].push_back(edge[i][1]);
        graph[edge[i][1]].push_back(edge[i][0]);
    }
    return graph;
}
void dfs(int node,vector<vector<int>>adj,vector<bool>&visit){
    visit[node]=true;
    for(auto neighbour :adj[node]){
        if(!visit[neighbour]){
            dfs(neighbour,adj,visit);
        }
    }
}

int CountComponent(int n,vector<vector<int>>adj){
    vector<bool>visit(n,false);
    int count=0;
    for(int i=0;i<n;i++){
        if(!visit[i]){
            dfs(i,adj,visit);
            count++;
        }
    }
    return count;
}
int main(){
    int n=5;
    vector<vector<int>>edge={{0, 1}, {1, 2}, {3, 4}};
    vector<vector<int>>adj=createAdj(n,edge);
    // for(int i=0;i<adj.size();i++){
    //     cout<<i<<"->";
    //     for(int j=0;j<adj[i].size();j++){
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<CountComponent(n,adj);
    cout<<endl;
}