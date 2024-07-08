#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void printDouble(int n) {
    cout << n*2 << endl;
}

int main() {
  vector<int>v;
  v.push_back(2);
  v.push_back(4);
  v.push_back(10);
  // This helps to perform  a function on a set of data
  for_each(v.begin(),v.begin()+2,printDouble);    //Output: 4 \n 8 
}