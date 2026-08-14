#include <iostream>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;

class Graph{
  public:
  unordered_map<int,list<pair<int,int>>>adjList;
  

void bfs(int src){
  unordered_map<int,bool>visited;
    queue<int>q;
  q.push(src);
  visited[src]=true;

  while(!q.empty()){
    int front=q.front();
    cout << front << ", ";
    q.pop();
    for(auto i:adjList[front]){
      int node=i.first;
      int weight=i.second;

    if(!visited[node]){
      q.push(node);
      visited[node]=true;
    }
    }
  }
}
void dfsHelper(int src,unordered_map<int,bool>&visited){
  visited[src]=true;
  cout << src << " ";
  for(auto neighbor:adjList[src]){
    int node=neighbor.first;
    if(!visited[node]){
      dfsHelper(node,visited);
    }

  }
}

void dfs(int n){
  unordered_map<int,bool>visited;
for(int src=0;src<=n;src++){
  if(!visited[src]){
    dfsHelper(src,visited);
  }
}
}

void addEdge(int u,int v,int weight,bool direction){
  if(direction==0){
    adjList[u].push_back({v,weight});
    adjList[v].push_back({u,weight});
  }else{
    adjList[u].push_back({v,weight});
  }

}
  void printAdjList(){
    for(auto i:adjList){
      cout << i.first << " { ";
      for(auto j:i.second){
        cout <<"{"<< j.first << ", "<<j.second<<"}, ";
      }
      cout << "}"<<endl;
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
cout<< "Bfs:";
g.bfs(0);
cout <<endl;
cout << "Dfs:";
g.dfs(7);
  return 0;
}

