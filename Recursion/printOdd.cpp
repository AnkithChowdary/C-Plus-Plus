#include <iostream>
using namespace std;
void printOddElements(int arr[],int size,int idx){
  if(idx>=size){
    return;
  }else{

   
    if(arr[idx]&1){
      cout<<arr[idx]<<" ";
    }
     printOddElements(arr,size,idx+1);
  }
}


int main() {
    int arr[]={1,7,10,6,4,3,9};
    int n=sizeof(arr)/sizeof(int);
    printOddElements(arr,n,0);
    return 0;
}