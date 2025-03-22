#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>

using namespace std;

class Graph{
  public:
  // first int-> u
  // Second int->v
  // Third int->wt
  unordered_map<int,list< pair<int,int> >>adjList;
  void addEdge(int u,int v,int weight,bool direction){
    // direction=0 -> undirected graph
    // direction=1 directed graph

    if(direction==0){
      adjList[u].push_back({v,weight});
      adjList[v].push_back({u,weight});
    }else{
      adjList[u].push_back({v,weight});
    }

  }
  void printAdjList(){

    for(auto i:adjList){
      cout << i.first << " ";
      cout << "{";
      for(auto j: i.second){
        cout << "{"<<j.first << ","<< j.second<<"}" << ", ";
      }
      cout << "}" << endl;
    }
  }

  
  void dfsHelper(int src,unordered_map<int,bool>&visited){
    cout << src << " ";
    visited[src]=true;

    for(auto nbr:adjList[src]){
      int node=nbr.first;
      if(!visited[node]){
        dfsHelper(node,visited);
      }
    }

  }

  void dfs(int n){
   
    unordered_map<int,bool>visited;
    // To also show disconnected graphs
    for(int src=0;src<=n;src++){
      if(!visited[src])
    dfsHelper(src,visited);
    }
    
  }
};



int main() {
Graph g;
g.addEdge(0,3,3,1);
g.addEdge(0,5,3,1);
g.addEdge(0,2,3,1);
g.addEdge(2,5,3,1);
g.addEdge(5,4,3,1);
g.addEdge(5,6,3,1);
g.addEdge(4,1,3,1);
g.addEdge(6,1,3,1);
g.printAdjList();
// Level by level traversal
// tc:O(V+E);
// Space complexity:O(V)
cout<< "dfs:";
g.dfs(7);

    return 0;
}