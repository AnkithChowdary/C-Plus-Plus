#include<iostream>
#include<list>
using namespace std;

int main() {
  list<int>li;
  li.push_back(10);
  li.push_back(15);
  li.push_back(20);
  li.push_front(5);
  list<int>::iterator it=li.begin();
  cout << "Before deletion: ";
  while (it != li.end()){
    cout << *it << " ";
    it++;
  }
  cout << endl;
  li.pop_back();
  li.pop_back();
  li.pop_front();
  it=li.begin();
cout << "After deletion: ";
  while (it != li.end()){
    cout << *it << " ";
    it++;
  }
  cout << endl;
li.clear();
cout << li.size();
  return 0;
}