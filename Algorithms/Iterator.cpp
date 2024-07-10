#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void printDouble(int n) {
    cout << n*2 << endl;
}

bool checkNum(int n){
  return n%2!=0;
}
bool checker(int n){
  return n>=20;
}
void printVec(vector<int>v){
vector<int>::iterator i=v.begin();
  while(i!=v.end()){
    cout << *(i) << " ";
    i++;
  }

}
int main() {
  vector<int>v;
  v.push_back(21);
  v.push_back(1);
  v.push_back(10);
  v.push_back(100);
  v.push_back(24);
  
  // This helps to perform  a function on a set of data
  for_each(v.begin(),v.begin()+2,printDouble);    //Output: 42 \n 2 


  // Iterator to find the specific value in a set of data
  // Instead of using the type we can use auto keyword 
  vector<int>::iterator it=find(v.begin(),v.end(),1); //As we know 1 is not present in the vector
  cout << *(it) << endl;   // The output is some random value . if the value is present in that vector then it prints that value
  it=find(v.begin(),v.end(),4);

//It points out the first occurence of the target
  it=find_if(v.begin(),v.end(),checkNum);
  //It return the count of specific target
  int c=count(v.begin(),v.end(),10);
  cout << c <<endl;

  //Counts based on condition 
  int cif=count_if(v.begin(),v.end(),checker);
  cout <<cif <<endl;
  //Sorts the data
  sort(v.begin(),v.end());

  cout<< "Sorted vector:";
  printVec(v);   // Output: 1 10 21 24 100
  cout<< endl;
  reverse(v.begin(),v.end());
  cout<< "Reversed vector: ";
  printVec(v);   // Output: 100 24 21 10 1
  cout << endl;
  //Rotates elements in range
  rotate(v.begin(),v.begin()+1,v.end());
  cout << "After rotation: ";
  printVec(v);  // Output: 24 21 10 1 100
  cout << endl;

  v.push_back(1);
  //unique only works when the duplicates are in consecutive manner
  sort(v.begin(), v.end());
  // Removes duplicates
  auto ite = unique(v.begin(), v.end());
    v.erase(ite, v.end());
    cout << "Unique elements: ";
    printVec(v);
  cout << endl;
}