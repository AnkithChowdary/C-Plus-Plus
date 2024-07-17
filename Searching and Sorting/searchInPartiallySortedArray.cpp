#include<iostream>
using namespace std;

int applyBinarySearch(int arr[],int size, int target) {
  int s=0;
  int e=size-1;
  int mid=s+(e-s)/2;
  while(s<=e){
  if(target==arr[mid]){
    return mid;
  }
  if(target==arr[mid+1]){
    return mid+1;
  }
  if(target==arr[mid-1]){
    return mid-1;
  }
  if(target>arr[mid]){
    e=mid-2;
  }else{
    s=mid+2;
  }
  mid=s+(e-s)/2;
  }
  return -1;
}

int main(){
   int arr[]={10,1,40,20,50,80,70};
   int size=7;
   int target=2;

   int ans=applyBinarySearch(arr,size,target);
   cout << "Target Found at index: "<<ans;
}