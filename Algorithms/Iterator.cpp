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


  // Iterator to find the specific value in a set of data
  // Instead of using the type we can use auto keyword 
  vector<int>::iterator it=find(v.begin(),v.end(),1); //As we know 1 is not present in the vector
  cout << *(it) << endl;   // The output is some random value . if the value is present in that vector then it prints that value
  it=find(v.begin(),v.end(),4);
  
}