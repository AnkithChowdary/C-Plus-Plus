#include<iostream>
#include<vector>
using namespace std;
int main() {

  vector<int>vr;
  vr.reserve(7);
  cout << "Capacity : " << vr.capacity() << endl;
  return 0;
}
