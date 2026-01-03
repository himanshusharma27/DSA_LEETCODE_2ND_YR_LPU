#include<bits/stdc++.h>
using namespace std ;

void dijkstra(int src , vector<vector<pair<int,int>>> &adj , int n){

    vector<int> dist(n , INT_MAX);
    priority_queue<pair<int , int> , vector<pair<int,int>> ,greater<>>pq;

    dist[src] = 0 ;
    pq.push({0,src});

    while(!pq.empty()){
        auto [d,u] = pq.top();
        pq.pop();
        if( d > dist[u]) continue;
        for(auto [v,w] : adj[u]){
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w ;
                pq.push({dist[v] , v});
            }
        }
    }

    for(int i = 0 ;i<n ; i++)
        cout<<"dist from "<< src <<" to "<<i <<" = "<<dist[i]<<endl;
} 

int main(){
    int n = 5 ;
    vector<vector<pair<int, int>>> adj(n);

    adj[0] = {{1,2} , {2,4}};
    adj[1] = {{2,1},{3,7}};
    adj[2] = {{4,3}};
    adj[3] = {{4,1}};

    dijkstra(0,adj , n);
}
