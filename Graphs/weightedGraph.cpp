#include<iostream>
#include<unordered_map>
#include<list>

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
};

int main() {
Graph g;
g.addEdge(0,1,3,1);
g.addEdge(0,2,4,1);
g.addEdge(1,2,1,1);
g.addEdge(2,3,16,1);
g.printAdjList();

    return 0;
}