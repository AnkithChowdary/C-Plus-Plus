#include<iostream>
#include<vector>
using namespace std;
int main() {
  vector<int> v={5,10,2};
  vector<int>::iterator i= v.begin();

  while(i != v.end()) {
    cout << *i <<endl;
    i++;
  }
}