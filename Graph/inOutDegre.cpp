#include <bits/stdc++.h>
using namespace std;
void bsf(vector<int>g[],int dist[],int start,int n){
    bool visited[n];
    memset(visited,false,n*sizeof(visited[0]));
    queue<int>q;
    q.push(start);
     dist[start] = 0;
    while(!q.empty()){
        start=q.front();
        q.pop();
        for(auto x:g[start]){
            if(!visited[x]){
                visited[x]=true;
                dist[x]=dist[start]+6; q.push(x);
                // distance+6;
            
            }
        }   
        
     }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        vector<int> g[n];
        //input and connection
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            g[a-1].push_back(b-1);
            g[b-1].push_back(a-1);
            }
            int start;
            cin>>start;
            int dist[n];
            memset(dist,-1 ,n*sizeof(dist[0]));
            bsf(g,dist,start-1,n);
            for(int i=0;i<n;i++){
                if(i!=start-1){
                    cout<<dist[i]<<" ";
                    
                }
            }
            cout<<"\n";
    }   
}
