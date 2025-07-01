#include <iostream>
#include<vector>
using namespace std;
void printAllEven(int arr[],int size,int idx,vector<int>&vec){
if(idx>=size){
  return;
}else{
  if(arr[idx]%2==0){
    vec.push_back(arr[idx]);
  }
  printAllEven(arr,size,idx+1,vec);
}
}
int main() {
    int arr[]={1,7,10,6,4,3,9};
    int n=sizeof(arr)/sizeof(int);
    vector<int>vec;
    printAllEven(arr,n,0,vec);
    for(int num:vec){
      cout<<num<<" ";
    }
    
    return 0;
}