#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;
void add_edge(int src,int dist, bool bi_dir=true){
    graph[src].push_back(dist);
    if(bi_dir){
        graph[dist].push_back(src);
    }
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto it :graph[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    display();

}