#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printVec(vector<int>v){
vector<int>::iterator i=v.begin();
  while(i!=v.end()){
    cout << *(i) << " ";
    i++;
  }
  cout << endl;
}

int main() {
  vector<int>v(4);
  v[0]=5;
  v[1]=6;
  v[2]=4;
  v[3]=1;
   make_heap(v.begin(),v.end());
  printVec(v);
  v.push_back(14);
  push_heap(v.begin(),v.end());
  printVec(v);
   // Deletion the root element moves to last  and so we need to remove it
  pop_heap(v.begin(),v.end());
  printVec(v);
  //deletion
  v.pop_back();
  

  // Sorting the heap
  sort_heap(v.begin(),v.end());
  vector(v);

  
  

}