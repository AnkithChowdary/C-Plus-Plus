#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
  int i;
  for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<""<<endl;
}
int main(){
  int n;
  cin>>n;
  vector<int>v;
  
  for(int i=0;i<n;i++){
int k;
cout<<"Enter the number: "<<endl;
cin>>k;
v.push_back(k);
  }
   v.pop_back();
   
  print(v);
  
   // value at specific index
   cout<<v.at(1);
   cout<<endl;
   // To clear all the elements from the vector 
   v.clear();


   // vector(size, intial value of that boxes)
   vector<int>v2(5,1);
   print(v2);
 
  return 0;

int arr[]={1,3,4,9};
  // copying a vector to a vector
  vector<int>v3(v2);
  
  //for each loop
  for(int a:v3){
    cout<<a<<" ";
  }
  // Using auto in for each loop
  for(auto a:v3){
    cout<<a<<" ";
  }

  // Front element in vector
  cout<<v.front()<<endl;
  // last element
  cout<<v.back()<<endl;
}