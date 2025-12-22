#include<iostream>
#include<vector>

using namespace std ;

class Graph{
    int V;  // No of vertices 
    vector<vector<int>> adj; // adcency list 

    public:

        Graph(int vertiex){   // constructor 
            V = vertiex;
            adj.resize(V);
        }

        void addEdge(int u , int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        void print(){
            for(int i = 0 ; i<V;i++){
                cout<<i<<"->";
                for(int n : adj[i]){
                    cout<<n<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(3,4);

    cout<<"Graph print : "<<endl;

    g.print();
}
