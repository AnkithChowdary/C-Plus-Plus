#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>v,int size,int index){
  if(index==size){
    return;
  }

  cout << v[index] << " ";
  printArray(v,size,index+1);
}
int main() {
  vector<int>v={5,4,10,20};
  printArray(v,v.size(),0);
  return 0;

}