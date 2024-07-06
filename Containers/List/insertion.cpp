#include<iostream>
#include<list>
using namespace std;

int main() {
  list<int>li;
  li.push_back(5);
  li.push_back(10);
  li.push_back(11);
  li.push_front(2);
  list<int>::iterator it=li.begin();
  li.insert(it,4);
}