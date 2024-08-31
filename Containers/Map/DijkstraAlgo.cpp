#include<bits/stdc++.h>

using namespace std;

vector<int> dijkstra(int v, vector<vector<int>> adj[], int source) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> result(v, INT_MAX);
    result[source] = 0;
    pq.push({0, source});
    while (!pq.empty()) {
        int distance = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for (auto vec : adj[node]) {
            int adjNode = vec[0];
            int weight = vec[1];
            if (distance + weight < result[adjNode]) {
                result[adjNode] = distance + weight;
                pq.push({result[adjNode], adjNode});
            }
        }
    }
    return result;
}

int main() {
    int v = 5; // Number of vertices
    vector<vector<int>> adj[v];

    // Adding edges to the graph
    adj[0].push_back({1, 10});
    adj[0].push_back({4, 3});
    adj[1].push_back({2, 2});
    adj[1].push_back({4, 4});
    adj[2].push_back({3, 9});
    adj[3].push_back({2, 7});
    adj[4].push_back({1, 1});
    adj[4].push_back({2, 8});
    adj[4].push_back({3, 2});

    int source = 0; // Starting node
    vector<int> distances = dijkstra(v, adj, source);

    // Printing the shortest distances from the source to all other vertices
    for (int i = 0; i < v; i++) {
        cout << "Distance from node " << source << " to node " << i << " is " << distances[i] << endl;
    }

    return 0;
}