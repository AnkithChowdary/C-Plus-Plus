#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main() {
  //Same as maps it also has types:
  //Ordered(self balancing search tree with log(n) complexity)
  //and Unordered set(HashTable with O(1) complexity)
  unordered_set<int>set;
  set.insert(5);
  set.insert(1);
  set.insert(4);
  unordered_set<int>::iterator it = set.begin();
  while (it!=set.end()) {
     cout << *(it) <<endl;
  }
}