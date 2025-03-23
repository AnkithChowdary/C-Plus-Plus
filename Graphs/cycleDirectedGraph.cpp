#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool dfsHelper(int src, unordered_map<int, bool>& visited, vector<vector<int>>& adj, unordered_map<int, bool>& dfsTracker) {
        visited[src] = true;
        dfsTracker[src] = true;
        
        for (auto nbr : adj[src]) {
            if (!visited[nbr]) {
                if (dfsHelper(nbr, visited, adj, dfsTracker)) {
                    return true;
                }
            } else if (dfsTracker[nbr]) { // Cycle detected
                return true;
            }
        }
        
        dfsTracker[src] = false; // Backtrack
        return false;
    }

    bool isCyclic(vector<vector<int>>& adj) {
        int n = adj.size();
        unordered_map<int, bool> visited;
        unordered_map<int, bool> dfsTracker;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                if (dfsHelper(i, visited, adj, dfsTracker)) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
   
    int V = 4, E = 4;
    vector<vector<int>> adj(V);
    
    adj[0].push_back(1);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(1); // This edge creates a cycle

    Solution obj;
    cout << "Cycle Detected: " << (obj.isCyclic(adj) ? "YES" : "NO") << endl;

    return 0;
}
