#include<iostream>
#include<queue>
using namespace std;

int main() {
  priority_queue<int,vector<int>,greater<int>>pq;
  // Min heap(The minimum value will be at the top)
  pq.push(10);
  pq.push(11);
  pq.push(0);
  pq.push(12);
  cout << pq.top();
}