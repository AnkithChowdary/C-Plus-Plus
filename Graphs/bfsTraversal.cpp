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

  void bfsTraversal(int src){
    queue<int>q;
    unordered_map<int,bool>visited;
 
    q.push(src);
    visited[src]=true;
  
    while(!q.empty()){
      int frontNode=q.front();
      cout << frontNode << ", ";
      q.pop();
  
      for(auto neighbour:adjList[frontNode]){
        int node=neighbour.first;
        int weight=neighbour.second;
        if(!visited[node]){
          q.push(node);
          visited[node]=true;
        }
      }
    }
  
  }

  
};



int main() {
Graph g;
g.addEdge(0,3,3,1);
g.addEdge(0,5,3,1);
g.addEdge(1,2,3,1);
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
cout<< "Bfs:";
g.bfsTraversal(0);

    return 0;
}