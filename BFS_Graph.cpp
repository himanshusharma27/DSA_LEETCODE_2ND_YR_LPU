#include<bits/stdc++.h>
using namespace std ;

class Graph{
    int V ;// no of vertices
     vector<vector<int>>adj;

     public:

     Graph(int vertices){
        V = vertices;
        adj.resize(V);
     }

     void addEdges(int u , int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
     }

     void bfs(int start){
        vector<bool>visited(V,false);
        queue<int>q;

        q.push(start);
        visited[start] = true;

        cout<<"BFS ";

        while(!q.empty()){
            int node = q.front();
            q.pop();
            cout<<node<<" ";

            for(int n : adj[node]){
                if(!visited[n]){
                    visited[n] = true;
                    q.push(n);
                }
            }
        }

     }

};

int main(){
    Graph g(6);
    g.addEdges(0,1);
    g.addEdges(0,2);
    g.addEdges(1,3);
    g.addEdges(1,4);
    g.addEdges(2,5);

    g.bfs(0);
    
}
