/**
 * @file dijstra.cpp

 * Dijstra: SSSP with non negative edge weight
 * Can use queue < pq ~ set
 * using queue is VERY mid, pq and set very based.
 * Use PQ cause its muscle memory.
 * 
 * Time: O(E log V)
 * Space: O(V)
 */
#include <bits/stdc++.h>

using namespace std;

struct Edge { 
    int u, v, w;
};

vector <int> dijkstra(int v, vector<vector<int>> adj[], int source){
    vector<int> dist (v, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    dist[source] = 0;
    
    pq.push({0, source});
    dist[source] = 0;
    
    while(!pq.empty()){
        int node = pq.top().second;
        pq.pop();
        
        for(auto child : adj[node]){
            int adjNode = child[0];
            int weight = child[1];
            
            if(dist[adjNode] > weight + dist[node]){
                dist[adjNode] = dist[node] + weight;
                pq.push({dist[adjNode], adjNode});
            }
        }
    }
    return dist;
}