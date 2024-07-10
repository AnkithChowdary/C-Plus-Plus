#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main() {
  vector<int>v(5);
  iota(v.begin(),v.end(),1);
  vector<int>::iterator it=v.begin();
  cout << *it <<endl; //Presents the value at which iterator is present
  // We can use it->first(*it.first) or it->second(*it.second) when we are dealing with maps as they are key value pairs

  //Input Iterator: For reading and forward direction
  //Example: istream_iterator<int>input_itr(cin);

  //Output iterator: write only and forward direction
  //example ostream_iterator<int>output_itr(cout," ");
  
  //Forward Iterator: Both input and output and also readin and writing
  //Example: forward_list<int>::iterator itr=nums.begin();
  //It is based upon Singly linked-list

  //Bi directional iterator: We can move in both forward and backward direction
  //They are based upon doubly linked list
  //Example: list<int>::iterator itr=nums.begin();

  //Random Access Iterator: Full Navigation capabilities in constant time
  // It is based upon vectors, arrays and deque
  //Example: vector<int>::iterator itr_last=v.end()-1;
  //R/W 

  return 0;
}