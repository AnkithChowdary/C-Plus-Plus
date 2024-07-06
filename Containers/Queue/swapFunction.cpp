#include<iostream>
#include<queue>
using namespace std;

int main() {
  queue<int>q;
  q.push(50);
  q.push(60);
  q.push(70);
  queue<int>q1;
  q1.push(1);
  q1.push(2);
  q1.push(3);
  q.swap(q1);
  
  return 0;
}