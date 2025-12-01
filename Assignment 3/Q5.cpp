#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <limits>

using namespace std;

void dijkstra(int startNode, unordered_map<int, vector<pair<int, int>>>& adj) {
    unordered_map<int, int> dist;

    for (auto const& [node, neighbors] : adj) {
        dist[node] = numeric_limits<int>::max();
    }

    dist[startNode] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({0, startNode});

    while (!pq.empty()) {
        int currentDist = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        if (currentDist > dist[u]) continue;

        if (adj.find(u) != adj.end()) {
            for (auto& edge : adj[u]) {
                int v = edge.first;      
                int weight = edge.second; 
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
            }
        }
    }

    cout << "Shortest distances from node " << startNode << ":\n";
    for (auto const& [node, d] : dist) {
        if (d == numeric_limits<int>::max()) {
            cout << "Node " << node << ": Unreachable\n";
        } else {
            cout << "Node " << node << ": " << d << "\n";
        }
    }
}

int main() {
    
    unordered_map<int, vector<pair<int, int>>> adj;
    adj[0] = {{1, 4}, {2, 1}};
    adj[1] = {{3, 5}};
    adj[2] = {{1, 2}, {3, 8}};
    adj[3] = {}; 

    dijkstra(0, adj);

    return 0;
}