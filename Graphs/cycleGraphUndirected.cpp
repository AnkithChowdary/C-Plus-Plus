#include <iostream>
#include <list>
#include <unordered_map>
#include <queue>
using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction) {
        if (direction == 0) { // Undirected graph
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        } else {
            adjList[u].push_back(v);
        }
    }

    bool cycleDetectionUndirectionalBfs(int src) {
        queue<int> q;
        unordered_map<int, int> parent;
        unordered_map<int, bool> visited;

        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while (!q.empty()) {
            int frontNode = q.front();
            q.pop();
            for (auto nbr : adjList[frontNode]) {
                if (!visited[nbr]) {
                    q.push(nbr);
                    visited[nbr] = true;
                    parent[nbr] = frontNode;
                } else if (nbr != parent[frontNode]) {
                    return true;
                }
            }
        }
        return false;
    }

    bool cycleDetectUsingDfs(int src, int parent, unordered_map<int, bool> &visited) {
        visited[src] = true;
        for (int nbr : adjList[src]) {
            if (nbr == parent) continue; // Ignore the edge leading to parent

            if (visited[nbr]) {
                return true; // Cycle found
            } else {
                if (cycleDetectUsingDfs(nbr, src, visited)) {
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle() {
        unordered_map<int, bool> visited;
        for (auto node : adjList) { // Iterate over all nodes (handles disconnected graphs)
            if (!visited[node.first]) {
                if (cycleDetectUsingDfs(node.first, -1, visited)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    // g.addEdge(3, 0, 0);
    g.addEdge(2, 3, 0);

    cout << "Cycle Detected (BFS): " << (g.cycleDetectionUndirectionalBfs(0) ? "YES" : "NO") << endl;
    cout << "Cycle Detected (DFS): " << (g.isCycle() ? "YES" : "NO") << endl;
    return 0;
}
