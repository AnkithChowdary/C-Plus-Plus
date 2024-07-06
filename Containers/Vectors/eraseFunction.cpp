#include<iostream>
#include<vector>
using namespace std;


int main() {

  vector<int>v;
  int i=4;
  int s;
  while(i>=0){
    cout << "Enter the number:";
    cin>>s;
    v.push_back(s);
    i--;
  }
  string a="34";
  v.erase(v.begin()+2);
  vector<int>::iterator it = v.begin();
  
    while(it != v.end()) {
      cout << *it;
      it++;
  }
  
}