DFS( vetor<int>adj,int v)

{
    vector<int>status(v,o);
    for (int i=0;i<v;i++){
        if ( status[i]==0)
        {
            Dfs_visit(Adj,status ,i);
        }
    }

}
Dfs_visit(vector<int>Adj,vector<int>&status,int i){
    cout<<i<<endl;
    status[i]=1;
    for(int i=0;i<Adj[i].size();i++){
        if(status[j]==0){
            Dfs_visit(Adj,status,Adj[i][j]);
        }
    }
}