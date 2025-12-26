#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

class Graph{
    int V ; // no of vertices 
    vector<vector<int>> adj; // adjancy list 

    public :

    Graph(int v){
        this->V = v;
        adj.resize(V);
    }

    void addedge(int u , int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void BFS(int start){
        vector<bool> visited(V,false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        cout<<"BFS traversal";
        while(!q.empty()){
            int  node = q.front();
            q.pop();
            cout<<node <<" ";

            for(int n : adj[node]){
                if(!visited[n]){
                    visited[n] = true;
                    q.push(n);
                }      
            }
        }    
        cout<<endl;
    }

    void DFS(int node , vector<bool>&visited){
        visited[node] = true;

        cout<<node <<" ";

        for(int n : adj[node]){
            if(!visited[n]){
                DFS(n,visited);
            }
        }
    }

    void DFSH(int start){
        vector<bool>visited(V,false);
        cout<<"DFS traversal:";
        DFS(start, visited);
        cout<<endl;
    }

};

int main(){
    Graph g(5);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,3);
    g.addedge(2,4);

    g.BFS(0);
    g.DFSH(0);
}
