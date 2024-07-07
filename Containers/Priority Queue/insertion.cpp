#include<iostream>
#include<queue>
using namespace std;

int main() {
  //Here elements are stored in max heap order (element with higheest value will be at the top)
  priority_queue<int>pq;
  pq.push(5);
  pq.push(50);
  pq.push(10);
  cout << pq.top();  // 50 gets printed
  
  return 0;
}