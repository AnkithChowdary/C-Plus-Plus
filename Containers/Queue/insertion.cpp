#include<iostream>
#include<queue>
using namespace std;

int main() {
  queue<int> q;
  q.push(5);  //5
  q.push(4);  //5->4
  q.push(1);  //5->4->1;
  cout << "rear element: " << q.back() << endl;
  cout << "Front element: " << q.front();
}