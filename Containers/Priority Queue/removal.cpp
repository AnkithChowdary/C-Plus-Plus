#include<iostream>
#include<queue>
using namespace std;

int main() {
  priority_queue<int>pq;
  pq.push(10);
  pq.push(20);
  pq.pop();  // 20 is removed 
  return 0;
}